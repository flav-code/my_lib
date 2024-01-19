/*
** EPITECH PROJECT, 2024
** my_radar
** File description:
** my_radar project
*/

#include <stdio.h>
#include "my.h"

int main(void)
{
    char str[] = " Hello   I'am   flav  ";
    const char *separators = " '";

    // my_putstr("------- START --------\n");
    // for (const char *token = my_strtok(str, separators); token != NULL;
    //     token = my_strtok(NULL, separators)) {
    //     my_putstr(token);
    //     my_putchar('\n');
    // }
    // my_putstr("-------- END ---------\n");

    char **array = my_str_to_word_array2(str, separators);
    my_show_word_array(array);
    return 0;
}
