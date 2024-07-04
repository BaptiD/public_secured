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

Test(ht_search, normal_search)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    ht_insert(ht, "cle 0", "content 0");
    ht_insert(ht, "cle 1", "content 1");
    cr_assert_eq(ht_search(ht, "cle 0"), "content 0");
}

Test(ht_search, normal_search_in_same_index)
{
    hashtable_t *ht = new_hashtable(hash, 1);

    ht_insert(ht, "cle 0", "content 0");
    ht_insert(ht, "cle 1", "content 1");
    cr_assert_eq(ht_search(ht, "cle 0"), "content 0");
}

Test(ht_search, error1_search)
{
    cr_assert_eq(ht_search(NULL, "cle 0"), NULL);
}

Test(ht_search, error2_search)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    cr_assert_eq(ht_search(ht, "cle 0"), NULL);
}

Test(ht_search, error3_search)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    cr_assert_eq(ht_search(ht, NULL), NULL);
}
