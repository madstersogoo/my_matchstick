/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my_sokoban_include_warning
*/

#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>

#ifndef MY_H_
#define MY_H_

int	my_getnbr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_strligne(char const *str);
char *my_strdup(char const *src);
int my_strlen(char const *str);
int fozzbazz(int start, int end);

#endif
