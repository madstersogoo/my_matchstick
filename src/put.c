/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** put_something
*/

#include "../lib/include/my.h"

void put_ligne(int nbligne)
{
        int etoile = nbligne*2+1;

        while (etoile != 0)
        {
                my_putstr("*");
                etoile--;
        }
        my_putchar('\n');
}

void put_bar(int compteur, int bar, int espace)
{
                while (compteur != bar){
                        while (espace != 0)
                        {
                                my_putstr(" ");
                                espace--;
                        }
                    my_putstr("|");
                    compteur++;
                }
}
