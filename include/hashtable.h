/*
** EPITECH PROJECT, 2024
** SECURED
** File description:
** include to the library
*/

#ifndef HASHTABLE_H
    #define HASHTABLE_H

typedef struct list_s {
    int key;
    char *content;
    void *next;
} list_t;

typedef struct hashtable_s {
    int len;
    int (*hash)(char *, int);
    list_t **list;
} hashtable_t;

// Hash function
int hash(char *key, int len);

// Create & destroy table
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);
void delete_hashtable(hashtable_t *ht);

// Handle table
int ht_insert(hashtable_t *ht, char *key, char *value);
int ht_delete(hashtable_t *ht, char *key);
char *ht_search(hashtable_t *ht, char *key);
void ht_dump(hashtable_t *ht);

#endif /* HASHTABLE_H */
