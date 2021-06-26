/*
** EPITECH PROJECT, 2020
** space_flag.c
** File description:
** print
*/

#include "../../includes/bsprintf.h"

int space_flag(char *str, int i)
{
    int x = i;

    while (str[i] == ' ')
        i++;
    if (x < i)
        my_putchar(' ');
    return (i);
}