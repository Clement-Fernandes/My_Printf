/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** task02
*/

#include "../../includes/bsprintf.h"

int my_putstr(char const *str)
{
    int e = 0;
    while (str[e] != '\0'){
        my_putchar(str[e]);
        e++;
    }
    return (0);
}