/*
** EPITECH PROJECT, 2024
** my_strupcase
** File description:
** function de fou vraiment
*/

#include <stddef.h>

static int is_delimiter(char c, const char *delimiters)
{
    if (c == '\0')
        return 0;
    for (int j = 0; delimiters[j] != '\0'; ++j)
        if (c == delimiters[j])
            return 1;
    return 0;
}

static int next_l(char *buff, size_t i, const char *delimiters)
{
    int count = 0;

    for (; buff[i] != '\0'; ++i)
        if (is_delimiter(buff[i], delimiters)) {
            break;
        } else
            (++count);
    return count;
}

char *my_strtok(char *str, const char *delimiters)
{
    static char *buff;
    int save = 0;

    if (str != NULL)
        buff = str;
    else
        str = buff;
    for (size_t i = 0; buff[i] != '\0'; ++i) {
        if (!is_delimiter(buff[i], delimiters)) {
            save = next_l(buff, i, delimiters);
            buff += i + save + 1;
            buff[-1] = '\0';
            return buff - 1 - save;
        }
    }
    return NULL;
}
