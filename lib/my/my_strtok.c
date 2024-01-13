/*
** EPITECH PROJECT, 2024
** my_strupcase
** File description:
** function de fou vraiment
*/

#include <stddef.h>

char *my_strtok(char *str, const char *delimiters)
{
    static char *buff;
    int printed = 0;
    size_t j = 0;

    if (str != NULL) {
        buff = str;
    } else
        str = buff;
    for (size_t i = 0; buff[i] != '\0'; ++i) {
        for (j = 0; delimiters[j] != '\0'; ++j) {
            if (buff[i] == delimiters[j]) {
                // printf("1 -> i: %d, d: %d\n", i, j);

                break;
            }
        }
        // printf("2 -> i: %d, d: %d\n", i, j);
        if (printed == 0 && buff[i] == delimiters[j]) {
            printed = 1;
            buff[i] = '\0';
            buff += i + 1;
            return buff - i - 1;
        }
    }
    return NULL;
}
