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

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(dump, normal_dump, .init = redirect_all_std)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    ht_insert(ht, "cle 0", "content 0");
    ht_insert(ht, "cle 1", "content 1");
    ht_insert(ht, "cle 2", "content 2");
    ht_dump(ht);
    cr_assert_stdout_eq_str("[0]:\n[1]:\n> 117565041 - content 2\n[2]:\n> 69915537 - content 0\n[3]:\n[4]:\n> 64521719 - content 1\n");
}

Test(dump, error1_dump)
{
    ht_dump(NULL);
}
