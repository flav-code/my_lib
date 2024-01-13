/*
** EPITECH PROJECT, 2024
** my_strstr
** File description:
** function de fou
*/

int set_length(char const *to_find)
{
    int j = 0;

    while (to_find[j] != '\0') {
        ++j;
    }
    return j;
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int tf = -1;
    int j = set_length(to_find);
    int final_index = -1;

    if (j == 0)
        return str;
    while (str[i] != '\0') {
        if (str[i] != to_find[tf + 1])
            tf = -1;
        if (str[i] == to_find[tf + 1]) {
            ++tf;
        }
        if (j - 1 == tf)
            final_index = i - (j - 1);
        ++i;
    }
    return (final_index == -1) ? (0) : &str[final_index];
}
