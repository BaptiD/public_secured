/*
** EPITECH PROJECT, 2024
** DUMP
** File description:
** dump function for secured project
*/
#include <stddef.h>
#include "hashtable.h"
#include "lib.h"

void display_list(list_t *list)
{
    while (list != NULL) {
        my_putstr("> ");
        my_put_nbr(list->key);
        my_putstr(" - ");
        my_putstr(list->content);
        my_putchar('\n');
        list = list->next;
    }
}

void ht_dump(hashtable_t *ht)
{
    if (!ht)
        return;
    for (int k = 0; k < ht->len; k++) {
        my_putchar('[');
        my_put_nbr(k);
        my_putstr("]:\n");
        display_list(ht->list[k]);
    }
}
