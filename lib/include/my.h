/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my_sokoban_include_warning
*/


#ifndef MY_H_
#define MY_H_

#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>

typedef struct match_s{
        char *str;
        int nbligne;
        int x;
        int espace;
}match_t;

int	my_getnbr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_strligne(char const *str);
int my_strlen(char const *str);
void etoile(char *str, int nbligne, int count);
void etoile1(char *str, int nbligne, int count);
void putbar(int nbligne, char *str, int count);
int start(int nbligne, int count, char *str);
void argument(void);
void linenumber(void);

#endif
