/*
** EPITECH PROJECT, 2024
** SECURED
** File description:
** desc
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "../include/hashtable.h"
#include "../include/lib.h"

Test(delete_hashtable, normal_ht_delete)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    ht_insert(ht, "cle 0", "content 0");
    delete_hashtable(ht);
}

Test(delete_hashtable, error1_ht_delete)
{
    delete_hashtable(NULL);
}
