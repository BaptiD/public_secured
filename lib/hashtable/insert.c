/*
** EPITECH PROJECT, 2024
** SECURED
** File description:
** insert
*/

#include "hashtable.h"
#include "lib.h"

#include <stdlib.h>

static list_t *add_in_list(list_t *list, int key, char *content)
{
    list_t *new = malloc(sizeof(list_t));
    list_t *temp = list;

    while (temp != NULL) {
        if (temp->key == key) {
            temp->content = content;
            free(new);
            return list;
        }
        temp = temp->next;
    }
    new->key = key;
    new->content = content;
    new->next = list;
    return new;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int locked;
    int i;

    if (ht == NULL || key == NULL || value == NULL)
        return 84;
    locked = ht->hash(key, my_strlen(key));
    i = locked % ht->len;
    ht->list[i] = add_in_list(ht->list[i], locked, value);
    return 0;
}
