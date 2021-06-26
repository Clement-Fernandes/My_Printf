/*
** EPITECH PROJECT, 2020
** test.c
** File description:
** print
*/

#include "../includes/bsprintf.h"

Test(my_printf, flag_c, .init = cr_redirect_stdout)
{
    my_printf("%c\n", 'X');
    cr_assert_stdout_eq_str("X\n");
}

Test(my_printf, flag_d, .init = cr_redirect_stdout)
{
    my_printf("%d\n", 76);
    cr_assert_stdout_eq_str("76\n");
}

Test(my_printf, flag_i , .init = cr_redirect_stdout)
{
    my_printf("%i\n", 54);
    cr_assert_stdout_eq_str("54\n");
}

Test(my_printf, flag_s , .init = cr_redirect_stdout)
{
    my_printf("%s\n", "bonjour");
    cr_assert_stdout_eq_str("bonjour\n");
}

Test(my_printf, flag_u , .init = cr_redirect_stdout)
{
    my_printf("%u\n", 54);
    cr_assert_stdout_eq_str("54\n");
}
