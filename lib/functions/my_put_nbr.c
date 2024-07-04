/*
** EPITECH PROJECT, 2023
** MY_PUT_NBR
** File description:
** Made by Pierre Pruvost
*/
#include "lib.h"

int longueur(int nb)
{
    int longe = 0;
    int l;

    while (nb != 0) {
        nb = nb / 10;
        longe = longe + 1;
    }
    return (longe);
}

static int puissance_dix_int(int j)
{
    int nb = 1;

    for (j; j > 1; j--) {
        nb *= 10;
    }
    return (nb);
}

int pri(int len, int nb, int memorie)
{
    int long_nb;
    int chiffre;

    while (len != 0) {
        long_nb = puissance_dix_int(len);
        chiffre = nb / long_nb;
        nb -= chiffre * long_nb;
        if (memorie && nb == 0) {
            my_putchar(chiffre + 49);
        } else {
            my_putchar(chiffre + 48);
        }
        len -= 1;
    }
}

int my_put_nbr(int nb)
{
    int len = longueur(nb);
    int chiffre;
    int long_nb;
    int memorie = 0;

    if (nb == -2147483648) {
        memorie = 1;
        nb += 1;
    }
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    } else if (nb == 0) {
        my_putchar('0');
        return 0;
    }
    pri(len, nb, memorie);
    return 0;
}
