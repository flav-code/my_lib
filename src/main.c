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
    char str[] = "Hello I'am flav and I'am big";
    char word[] = "flav e";
    char *occ = malloc(sizeof(char) * my_strlen(str) + 1);

    if (occ == NULL)
        return 1;
    my_putstr(str);
    my_putchar('\n');
    my_putstr("------- START --------\n");
    occ = my_strstr(str, word);
    if (occ != NULL)
        printf("Good: %s\n", occ);
    else
        printf("Not Good\n");
    my_putstr("-------- END ---------\n");
    return 0;
}
