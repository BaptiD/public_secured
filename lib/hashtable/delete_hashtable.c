/*
** EPITECH PROJECT, 2024
** SECURED
** File description:
** delete table
*/

#include "hashtable.h"

#include <stdlib.h>
#include <stddef.h>

void destroy_linked_list(list_t *link)
{
    void *temp;

    while (link != NULL) {
        temp = link->next;
        free(link);
        link = temp;
    }
}

void delete_hashtable(hashtable_t *ht)
{
    if (ht == NULL)
        return;
    for (int k = 0; k < ht->len; k++) {
        destroy_linked_list(ht->list[k]);
    }
    free(ht->list);
    free(ht);
}
