/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** put_something
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include "../lib/include/my.h"

void start(int nbligne, int count, char *str)
{
	my_putstr(str);
	my_putchar('\n');
	my_putstr("Your turn:\n");
	my_putstr("Line: ");
	inputplayer(nbligne, count, str);
}

void inputplayer(int nbligne, int count, char *str)
{
	int x = 0;
	while (x == 0)
	{
	}
	my_put_nbr(x);
}
