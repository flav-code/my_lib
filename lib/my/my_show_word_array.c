/*
** EPITECH PROJECT, 2024
** my_str_to_word_array
** File description:
** crazy man :)
*/

#include "my.h"

int my_show_word_array(char *const *tab)
{
    char *str;
    int index = 0;

    for (int i = 0; tab[i]; ++i) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return 0;
}
