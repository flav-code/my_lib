/*
** EPITECH PROJECT, 2024
** my_get_array_len
** File description:
** get array len
*/

#include <unistd.h>
#include "my.h"

int my_get_array_len(char **array)
{
    int i = 0;

    for (; i < array[i] != '\0'; ++i);
    return i;
}
