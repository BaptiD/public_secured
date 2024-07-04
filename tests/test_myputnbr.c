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

Test(myputnbr, basic_putnbr)
{
    cr_assert_eq(my_put_nbr(42), 0);
}

Test(myputnbr, basic_neg_putnbr)
{
    cr_assert_eq(my_put_nbr(-42), 0);
}

Test(myputnbr, basic_int_lim_putnbr)
{
    cr_assert_eq(my_put_nbr(-2147483648), 0);
}
