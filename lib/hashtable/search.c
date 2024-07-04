/*
** EPITECH PROJECT, 2024
** SEARCH
** File description:
** file for search function in secured project
*/

#include "lib.h"
#include "hashtable.h"

#include <stddef.h>

char *find_in_list(int key_nb, list_t *list)
{
    while (list != NULL) {
        if (list->key == key_nb) {
            return list->content;
        }
        list = list->next;
    }
    return NULL;
}

char *ht_search(hashtable_t *ht, char *key)
{
    int key_nb;
    int index;

    if (ht == NULL || key == NULL)
        return NULL;
    key_nb = hash(key, my_strlen(key));
    index = key_nb % ht->len;
    return find_in_list(key_nb, ht->list[index]);
}
