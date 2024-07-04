/*
** EPITECH PROJECT, 2024
** my_strlen
** File description:
** lib function
*/

int my_strlen(char *str)
{
    int k = 0;

    while (str[k] != 0)
        k++;
    return k;
}
