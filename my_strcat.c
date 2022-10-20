/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** EPITECH Day 07 Task02 project
*/

int my_strlen(char const *str);

char *my_strcat(char  *dest, char const *src)
{
    int i;
    int dest_len = my_strlen(dest);

    for (i = 0 ; src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';

    return (dest);
}
