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

Test(ht_insert, normal_insert)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    cr_assert_eq(ht_insert(ht, "cle 0", "content 0"), 0);
}

Test(ht_insert, normal_collision_insert)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    ht_insert(ht, "cle 1", "content 1");
    cr_assert_eq(ht_insert(ht, "cle 1", "new content 1"), 0);
}

Test(ht_insert, error1_insert)
{
    cr_assert_eq(ht_insert(NULL, "cle 0", "content 0"), 84);
}

Test(ht_insert, error2_insert)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    cr_assert_eq(ht_insert(ht, NULL, "content 0"), 84);
}

Test(ht_insert, error3_insert)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    cr_assert_eq(ht_insert(ht, "cle 1", NULL), 84);
}
