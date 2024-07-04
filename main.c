
/*
** EPITECH PROJECT, 2024
** test
** File description:
** test
*/

#include "include/hashtable.h"
#include "include/lib.h"

#include <stdio.h>

void main(void)
{
    hashtable_t *ht = new_hashtable(hash, 2);

    ht_insert(ht, "cle", "content");
    ht_insert(ht, "cle 1", "content 1");
    printf("insert ok\n");
    ht_delete(ht, "");
    printf("delete ok\n");
    ht_search(ht, "");
    char *t = "";
    my_strlen(t);
    printf("search ok\n");
    ht_dump(ht);
}

void notmain(void)
{
    hashtable_t *ht_crash = new_hashtable(NULL, 2);
    if (ht_crash == NULL)
        printf("NULL hash in ht creation OK\n");
    hashtable_t *ht_crash2 = new_hashtable(hash, -1);
    if (ht_crash2 == NULL)
        printf("negative or null ht len OK\n");

    hashtable_t *ht = new_hashtable(hash, 5);
    if (ht != NULL)
        printf("normal ht creation (hash, 5) OK\n");
    if (ht_insert(ht, "cle 0", "contenu de la clé 'cle 0'") == 0)
        printf("normal insert in normal ht OK\n");
    if (ht_insert(ht, NULL, "contenu de la clé 'cle 0'") == 84)
        printf("NULL key insert in normal ht OK\n");
    if (ht_insert(ht, "cle 5", NULL) == 84)
        printf("NULL content insert in normal ht OK\n");    
    ht_dump(ht);
    printf("basic dump OK\n");

    printf("deleting...\n");
    ht_delete(ht, "cle 3");
    printf("delete non-existent key OK\n");
    ht_delete(ht, "cle 6");
    ht_delete(ht, NULL);
    ht_delete(NULL, "cle 1");
    ht_dump(ht);
    printf("Searching : %s\n", ht_search(NULL, NULL));
    delete_hashtable(ht);
    ht = new_hashtable(NULL, 2);
    ht_insert(ht, "cle 5", "contenu de la clé 'cle 5'");
    delete_hashtable(ht);
}
