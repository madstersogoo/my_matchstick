/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** main
*/

#include "../lib/include/my.h"

int main(int argc, char **argv)
{
	int argerror = 0;
	if (argc != 3) {
		argument();
		return (84);
	}
        int nbligne = my_getnbr(argv[1]);
	if (nbligne < 1 || nbligne > 99) {
		linenumber();
		return (84);
	}
	int count = my_getnbr(argv[2]);
        char *str;
        str = malloc(sizeof(char) * (nbligne * nbligne) * nbligne);
	etoile(str, nbligne, count);
}

void etoile(char *str, int nbligne, int count)
{
	int i = my_strlen(str);
	while (i != (nbligne * 2 )+ 1) {
		str[i] = '*';
		i++;
	}
	str[i] = '\n';
	i = i + 1;
	putbar(nbligne, str, count);
}

void putbar(int nbligne, char *str, int count)
{
	int bar = 1;
	int i = my_strlen(str);
	int compteurligne = 0;
	int compteurbar = 0;
	int x = 1;
	int space = nbligne - x;
	while (compteurligne != nbligne) {
		str[i] = '*';
		i = i + 1;
		while (space != 0) {
			str[i] = ' ';
			i++;
			space--;
		}
		while (compteurbar != bar) {
			str[i] = '|';
			compteurbar++;
			i++;
		}
		space = nbligne - x;
		while (space != 0) {
			str[i] = ' ';
			i++;
			space--;
		}
		x = x + 1;
		space = nbligne - x;
		str[i] = '*';
		i = i + 1;
		str[i] = '\n';
		i++;
		compteurligne++;
		bar = bar + 2;
		compteurbar = 0;
	}
	etoile1(str, nbligne, count);
}

void etoile1(char *str, int nbligne, int count)
{
	int i = my_strlen(str);
	int compteur = 0;
	while (compteur != (nbligne * 2 )+ 1) {
		str[i] = '*';
		i++;
		compteur++;
	}
	str[i] = '\n';
	i = i + 1;
	str[i] = '\0';
	start(nbligne, count, str);
}
