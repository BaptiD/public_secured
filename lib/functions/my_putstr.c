/*
** EPITECH PROJECT, 2023
** MY_PUTSTR
** File description:
** Made by Pierre Pruvost
*/
#include "lib.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
