/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** ai turn to play
*/

#include "../lib/include/my.h"

void printbase(void)
{
	my_putchar('\n');
	my_putstr("Your turn:\n");
	my_putstr("Line: ");
}

void printplayerturn(int ligne, int matches)
{
	my_putstr("Player removed ");
	my_put_nbr(matches);
	my_putstr(" match(es) from line ");
	my_put_nbr(ligne);
	my_putchar('\n');
}
