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

Test(ht_delete, normal_delete)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    ht_insert(ht, "cle 0", "content 0");
    ht_insert(ht, "cle 1", "content 1");
    cr_assert_eq(ht_delete(ht, "cle 0"), 0);
}

Test(ht_delete, normal_delete_in_same_index)
{
    hashtable_t *ht = new_hashtable(hash, 1);

    ht_insert(ht, "cle 0", "content 0");
    ht_insert(ht, "cle 1", "content 1");
    cr_assert_eq(ht_delete(ht, "cle 0"), 0);
}

Test(ht_delete, error1_delete)
{
    cr_assert_eq(ht_delete(NULL, "cle 0"), 84);
}

Test(ht_delete, error2_delete)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    cr_assert_eq(ht_delete(ht, "cle 0"), 84);
}

Test(ht_delete, error3_delete)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    cr_assert_eq(ht_delete(ht, NULL), 84);
}
