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
    char str[] = "...Hello! !world! I!'m flav''.";
    const char separator[] = " .!'";

    printf("------- START --------\n");
    for (const char *token = my_strtok(str, separator); token != NULL;
        token = my_strtok(NULL, separator))
        printf("%s\n", token);
    printf("-------- END ---------\n");
    return 0;
}
