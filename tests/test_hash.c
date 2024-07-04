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

Test(hash, basic_hash)
{
    cr_assert_eq(hash("cle 1", 5), hash("cle 1", 5));
}
