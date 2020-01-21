/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** main
*/
#include "../lib/include/my.h"

int main(int argc, char **argv)
{
        int nbligne = my_getnbr(argv[1]);
        int saved_nbligne = nbligne;
        int bar = 1;
        int compteur = 0;
        int saved = nbligne-1;
        int espace = saved;
        int x = 1;
        put_ligne(nbligne);
        while (nbligne != 0)
        {
                my_putstr("*");
                put_bar(compteur, bar, espace);
                espace = saved - x;
                while (espace >= 0)
                {
                    my_putstr(" ");
                    espace--;
                }
                my_putstr("*");
                my_putchar('\n');
                nbligne--;
                espace = saved - x;
                x++;
                bar = bar + 2;
                compteur = 0;
        }
        nbligne = saved_nbligne;
        put_ligne(nbligne);
}
