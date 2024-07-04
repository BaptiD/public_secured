/*
** EPITECH PROJECT, 2024
** SECURED
** File description:
** new_hashtable
*/

#include "hashtable.h"

#include <stdlib.h>
#include <stddef.h>

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *new;

    if (len <= 0 || hash == NULL)
        return NULL;
    new = malloc(sizeof(hashtable_t));
    new->list = malloc(sizeof(list_t *) * len);
    for (int k = 0; k < len; k++)
        new->list[k] = NULL;
    new->len = len;
    new->hash = hash;
    return new;
}
