/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** EPITECH Day 07 Task02 project
*/
int my_putstr(char const *str);

int main(int argc, char **argv)
{
    int i = 0;
    while (i < argc) {
        my_putstr(argv[i]);
        my_putchar('\n');
        i++;
    }
}
