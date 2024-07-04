/*
** EPITECH PROJECT, 2023
** MY_PUTCHAR
** File description:
** Made by Pierre Pruvost
*/
#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}
