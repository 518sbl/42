*This activity has been created as part of the 42 curriculum by ankalini.*

# ft_printf

## Description

`ft_printf` est une réimplémentation de la fonction `printf()` de la librairie standard C. Elle formate et affiche une série de caractères et de valeurs sur la sortie standard `stdout`. Les spécifications de format, commençant par le signe `%`, déterminent le format de sortie pour les arguments qui suivent la chaîne de format.

Les conversions supportées sont :

| Spécificateur | Description |
|---|---|
| `%c` | Affiche un caractère |
| `%s` | Affiche une chaîne de caractères |
| `%p` | Affiche un pointeur en hexadécimal |
| `%d` | Affiche un nombre décimal (base 10) |
| `%i` | Affiche un entier en base 10 |
| `%u` | Affiche un nombre décimal non signé |
| `%x` | Affiche un nombre en hexadécimal minuscule |
| `%X` | Affiche un nombre en hexadécimal majuscule |
| `%%` | Affiche le caractère `%` |

## Instructions

### Compilation

```bash
make
```

Cela génère la librairie `libftprintf.a` à la racine du repository.

### Utilisation dans un projet

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a -o mon_programme
```

### Exemple

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Bonjour %s, tu as %d ans\n", "ankalini", 21);
    ft_printf("Pointeur : %p\n", (void *)&main);
    ft_printf("Hex : %x\n", 255);
    return (0);
}
```

### Nettoyage

```bash
make clean    # supprime les .o
make fclean   # supprime les .o et libftprintf.a
make re       # recompile tout
```

## Algorithm

### Fonctions variadiques

`ft_printf` utilise les **fonctions variadiques** du C, c'est-à-dire des fonctions qui acceptent un nombre variable d'arguments. Cela est nécessaire car `printf` peut recevoir 1, 2, 5, ou autant d'arguments qu'on veut selon la chaîne de format.

Les macros utilisées sont :
- `va_start` — initialise la liste d'arguments
- `va_arg` — récupère l'argument suivant
- `va_end` — libère la liste d'arguments

### Dispatching des conversions

La fonction principale parcourt la chaîne de format caractère par caractère avec une boucle `while`. Quand elle rencontre un `%`, elle regarde le caractère suivant et utilise des `if/else` pour appeler la bonne fonction de conversion :

```
'%c' → ft_print_char()
'%s' → ft_print_str()
'%d' ou '%i' → ft_print_nbr()
'%u' → ft_print_unsigned()
'%x' ou '%X' → ft_print_hex()
'%p' → ft_print_ptr()
'%%' → write('%')
```

Chaque fonction retourne le nombre de caractères écrits, et `ft_printf` accumule ce total pour le retourner à la fin.

### Pourquoi cette structure ?

Le code est découpé en plusieurs fichiers (un par type de conversion) afin de respecter la norme 42 (25 lignes maximum par fonction) et de garder un code lisible et maintenable.

## Resources

- [printf man page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [Variadic functions in C — GeeksforGeeks](https://www.geeksforgeeks.org/variadic-functions-in-c/)
- [va_start, va_arg, va_end — cppreference](https://en.cppreference.com/w/c/variadic)
- [ar command — create a library](https://linux.die.net/man/1/ar)

### AI usage

Claude (claude.ai) a été utilisé comme support d'apprentissage — pour comprendre les fonctions variadiques (`va_start`, `va_arg`, `va_end`), la structure d'un Makefile, et pour obtenir des retours sur les erreurs de code. Claude n'a pas écrit le code directement ; il a expliqué les concepts et signalé les erreurs pour que je puisse les corriger moi-même.