/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** main
*/
#include "lib/include/my.h"

int main(int argc, char **argv)
{
        int nbligne = my_getnbr(argv[1]);
        int etoile = nbligne*2+1;
        int savedetoile = etoile;
        int bar = 1;
        int compteur = 0;
        int saved = nbligne-1;
        int espace = saved;
        int x = 1;
        if (argc != 3)
                return (84);

        while (etoile != 0)
        {
                my_putstr("*");
                etoile--;
        }
        my_putchar('\n');
        while (nbligne != 0)
        {
                my_putstr("*");
                while (compteur != bar){
                        while (espace != 0)
                        {
                                my_putstr(" ");
                                espace--;
                        }
                    my_putstr("|");
                    compteur++;
                }
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
        etoile = savedetoile;
        while (etoile != 0)
        {
                my_putstr("*");
                etoile--;
        }
        my_putchar('\n');
}
