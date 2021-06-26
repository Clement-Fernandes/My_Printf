/*
** EPITECH PROJECT, 2020
** test_two.c
** File description:
** print
*/

#include "../includes/bsprintf.h"

Test(my_printf, flag_o , .init = cr_redirect_stdout)
{
    my_printf("%o\n", 43);
    cr_assert_stdout_eq_str("53\n");
}

Test(my_printf, flag_b , .init = cr_redirect_stdout)
{
    my_printf("%b\n", 54);
    cr_assert_stdout_eq_str("110110\n");
}

Test(my_printf, flag_x_min , .init = cr_redirect_stdout)
{
    my_printf("%x\n", 32);
    cr_assert_stdout_eq_str("20\n");
}

Test(my_printf, flag_x_maj , .init = cr_redirect_stdout)
{
    my_printf("%X\n", 46);
    cr_assert_stdout_eq_str("2E\n");
}

Test(my_printf, test_mouli , .init = cr_redirect_stdout)
{
    my_printf("%s%%42%s\n", "astek", "moulinette");
    cr_assert_stdout_eq_str("astek%42moulinette\n");
}

