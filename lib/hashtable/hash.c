/*
** EPITECH PROJECT, 2024
** HASH
** File description:
** hash function
*/
#include "lib.h"
#include <stdio.h>

int hash(char *key, int len)
{
    unsigned int total = 0;

    for (int i = 0; i < len; i++) {
        total += key[i] * (key[i] + 21);
        total += (len * key[i]) / ((i * i) + len);
        total *= total / (len * len);
        total /= (len + i);
    }
    total %= 2147483647;
    return (int)total;
}
