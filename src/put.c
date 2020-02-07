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
	int testplayer = 0;
	my_putstr(str);
	printbase();
	inputplayer(nbligne, count, str);
	testplayer = testmapplayer(str);
}

void inputplayer(int nbligne, int count, char *str)
{
	int x = 0;
	while (x == 0) {
		char *buffer;
		size_t bufsize = 32;
		buffer = (char *)malloc(bufsize * sizeof(char));
		getline(&buffer,&bufsize,stdin);
		x = my_getnbr(buffer);
	}
	int y = 0;
	my_putstr("Matches: ");
	while (y == 0) {
		char *buffer;
		size_t bufsize = 32;
		buffer = (char *)malloc(bufsize * sizeof(char));
		getline(&buffer,&bufsize,stdin);
		y = my_getnbr(buffer);
	}
	str = removeplayer(x, y, str, nbligne, count);
	return (str);
}

int testmapplayer(char *str)
{
	int i = 0;
	int x = 0;
	while (str[i] != '\0') {
		if (str[i] == '|')
			x++;
		i++;
	}
	if (x == 0)
		return (1);
	else
		return (2);
}

void removeplayer(int ligne, int matches, char *str, int nbligne, int count)
{
	int i = 0;
	printplayerturn(ligne, matches);
	while (ligne + 2 != 0) {
		while (str[i] != '\n') {
			i++;
		}
		ligne--;
		i = i + 1;
	}
	while (matches != 0) {
		if (str[i] == '|') {
			str[i] = ' ';
			matches--;
		}
		i--;
	}
	my_putstr(str);
	inputia(nbligne, count, str);
}












