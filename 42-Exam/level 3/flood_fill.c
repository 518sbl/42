#include "flood_fill.h"

static void fill_helper(char **tab, t_point size, t_point pos, char target)
{
    if (pos.x < 0 || pos.y < 0)
        return ;
    if (pos.x >= size.x || pos.y >= size.y)
        return ;
    if (tab[pos.y][pos.x] != target)
        return ;
    tab[pos.y][pos.x] = 'F';
    fill_helper(tab, size, (t_point){pos.x + 1, pos.y}, target);
    fill_helper(tab, size, (t_point){pos.x - 1, pos.y}, target);
    fill_helper(tab, size, (t_point){pos.x, pos.y + 1}, target);
    fill_helper(tab, size, (t_point){pos.x, pos.y - 1}, target);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
    char target;

    if (begin.x < 0 || begin.y < 0)
        return ;
    if (begin.x >= size.x || begin.y >= size.y)
        return ;
    target = tab[begin.y][begin.x];
    if (target == 'F')
        return ;
    fill_helper(tab, size, begin, target);
}