/*
** EPITECH PROJECT, 2024
** DELETE
** File description:
** delete function for secured project
*/

#include "hashtable.h"
#include "lib.h"
#include <stddef.h>
#include <stdlib.h>

int del_an_element(int ref, list_t **list)
{
    list_t *node = *list;
    list_t *prev;
    int count = 0;

    while (node != NULL && node->key != ref) {
        prev = node;
        node = node->next;
        count++;
    }
    if (count == 0 && node != NULL) {
        *list = node->next;
        free(node);
        return 0;
    } else if (node != NULL) {
        prev->next = node->next;
        free(node);
        return 0;
    }
    return 84;
}

int ht_delete(hashtable_t *ht, char *key)
{
    int key_nb;
    int index;

    if (ht == NULL || key == NULL)
        return 84;
    key_nb = hash(key, my_strlen(key));
    index = key_nb % ht->len;
    return del_an_element(key_nb, &ht->list[index]);
}
