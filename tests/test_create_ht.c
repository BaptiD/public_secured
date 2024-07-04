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

Test(new_hashtable, normal_create)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    cr_assert_eq(ht->len, 5);
}

Test(new_hashtable, error1_create)
{
    cr_assert_eq(new_hashtable(NULL, 5), NULL);
}

Test(new_hashtable, error2_create)
{
    cr_assert_eq(new_hashtable(hash, -1), NULL);
}
