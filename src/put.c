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
	int test = 0;
	my_putstr(str);
	printbase();
	while (test != 1) {
		test = testmap(str);
		str = inputplayer(nbligne, count, str);
	}
}

int inputplayer(int nbligne, int count, char *str)
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
	str = removeplayer(x, y, str);
	return (str);
}

int testmap(char *str)
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

int removeplayer(int ligne, int matches, char *str)
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
	return (str);
	my_putstr(str);
}












