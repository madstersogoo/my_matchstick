/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** ai turn to play
*/
#include <stdio.h>
#include <time.h>
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

void printiaturn(int ligne, int matches)
{
	my_putchar('\n');
	my_putstr("IA's turn. . .\n");
	my_putstr("IA removed ");
	my_put_nbr(matches);
	my_putstr(" match(es) from line ");
	my_put_nbr(ligne);
	my_putchar('\n');
}


void inputia(int nbligne, int count, char *str)
{
	srand(time(0));
        int lignechosen = (rand() %
	(nbligne - 0 + 1)) + 0; 
       	int matchechosen = (rand() %
        (count - 0 + 1)) + 0; 
	removeia(lignechosen, matchechosen, nbligne, count, str);
}

void removeia(int lignechosen, int matchechosen, int nbligne, int count, char *str)
{
	int i = 0;
	printiaturn(lignechosen, matchechosen);
	while (lignechosen + 2 != 0) {
		while (str[i] != '\n') {
			i++;
		}
		lignechosen--;
		i = i + 1;
	}
	while (matchechosen != 0) {
		if (str[i] == '|') {
			str[i] = ' ';
			matchechosen--;
		}
		i--;
	}
	start(nbligne, count, str);
}
