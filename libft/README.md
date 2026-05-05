*This activity has been created as part of the 42 curriculum by ankalini.*

# Libft

## Description

Libft is the first project of course 42. The idea is to rewrite a set of standard functions in library C from the beginning, with the aim of acquiring an in-depth knowledge of their internal workings. The final product is a personal static library—libft. a—who may be employed throughout Program 42 in upcoming projects.

The library includes three types of features: the standard functions of the libc (made with the prefix `ft_`), additional utility functions not found in the libc and functions to manage linked lists (bonus section).

---

## Instructions

### Compilation

```bash
make        # Compiles the library and generates libft.a
make clean  # Removes object files
make fclean # Removes object files and libft.a
make re     # Fully recompiles everything
```

### Usage

Include the header in your source file:

```c
#include "libft.h"
```

Then compile your project with the library:

```bash
cc your_file.c -L. -lft -o your_program
```

> All files must be placed at the root of the repository. The library is built using `ar` and compiled with the flags `-Wall -Wextra -Werror`.

---

## Library Description

### Part 1 — Libc Functions

Reimplementations of standard C library functions, prefixed with `ft_`:

| Function | Description |
|---|---|
| `ft_isalpha` | Returns 1 if the character is alphabetic, 0 otherwise |
| `ft_isdigit` | Returns 1 if the character is a digit, 0 otherwise |
| `ft_isalnum` | Returns 1 if the character is alphanumeric, 0 otherwise |
| `ft_isascii` | Returns 1 if the character is in the ASCII table, 0 otherwise |
| `ft_isprint` | Returns 1 if the character is printable, 0 otherwise |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills a memory area with a given byte |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies a memory area |
| `ft_memmove` | Copies a memory area, handling overlaps |
| `ft_strlcpy` | Copies a string with a size limit |
| `ft_strlcat` | Concatenates two strings with a size limit |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |
| `ft_strchr` | Finds the first occurrence of a character in a string |
| `ft_strrchr` | Finds the last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Searches for a byte in a memory area |
| `ft_memcmp` | Compares two memory areas |
| `ft_strnstr` | Finds a substring within a string |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates and zero-initializes a memory area |
| `ft_strdup` | Duplicates a string using malloc |

### Part 2 — Additional Functions

Utility functions not found in the libc, or present in a different form:

| Function | Description |
|---|---|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from a set at both ends of a string |
| `ft_split` | Splits a string by a delimiter character into an array |
| `ft_itoa` | Converts an integer to its string representation |
| `ft_strmapi` | Applies a function to each character of a string, returns a new string |
| `ft_striteri` | Applies a function to each character of a string in place |
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

### Part 3 — Linked List Functions (Bonus)

Functions to manipulate singly linked lists using the `t_list` structure:

```c
typedef struct s_list
{
    void          *content;
    struct s_list *next;
} t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Returns the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Frees a single node and its content |
| `ft_lstclear` | Frees all nodes of the list and sets the pointer to NULL |
| `ft_lstiter` | Applies a function to the content of each node |
| `ft_lstmap` | Creates a new list by applying a function to each node's content |

---

## Resources

### Documentation & References

- [C Standard Library Reference — cppreference.com](https://en.cppreference.com/w/c)
- [Linux man pages](https://man7.org/linux/man-pages/)
- [42 Norm](https://github.com/42School/norminette)
- [Makefile tutorial](https://makefiletutorial.com/)

### AI Usage

During this project, artificial intelligence (Claude d'Anthropic) was used as a tool to assist learning and debugging, never as a way to produce or reproduce code directly.
In practice, AI has been implemented as follows:

Interpret error messages—facing cryptic compiler or tester outputs (such as incorrect ASCII characters in ft_itoa or a "bad index" in ft_strmapi), the AI assisted me in deciphering the meaning of the error and directed me toward discovering the initial cause, without directly providing me with the corrected code.
While exploring concepts—in moments when I was not sure how certain C behaviors worked (for example, the percentage on negative integers, or counting rows in the norm), the AI helped me understand the logic behind it through explanations and illustrations.

Debugging strategy—rather than asking "fix my code," I exposed the symptoms and exploited AI as a thought collaborator to analyze what might not work, which allowed me to grasp and address the problem by myself.
Environment and tools – AI assisted in the configuration of instruments such as Francinette and Norminette, as well as in understanding how to configure PATH on a limited educational environment.
Drafting of the README—artificial intelligence contributed to the structuring and drafting of this README document in accordance with the subject’s requirements.

In all scenarios, the intention was to use AI in the same way as we would do with a qualified colleague or mentor—to ask questions, to receive clarifications and acquire knowledge—so as not to evade the cognitive process that gives this program its value.