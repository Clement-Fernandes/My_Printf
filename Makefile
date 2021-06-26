##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## print
##

SRC	=	lib/my/my_printf.c		\
		lib/my/my_putchar.c		\
		lib/my/my_put_nbr.c		\
		lib/my/my_putstr.c		\
		lib/my/my_flag_u.c		\
		lib/my/my_flag_o.c		\
		lib/my/my_flag_b.c		\
		lib/my/my_flag_x_min.c	\
		lib/my/my_flag_x_maj.c	\
		lib/my/flags_print.c	\
		lib/my/porcent_flag.c	\
		lib/my/call.c			\
		lib/my/my_flag_s_maj.c	\
		lib/my/space_flag.c		\
		tests/test.c			\
		tests/test_two.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAG	=	-I includes -Wall -Wextra

all: $(NAME)

$(NAME):	$(OBJ)
	ar  rc $(NAME) $(OBJ)
	@tput setaf 5; cat includes/signature; tput sgr0

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *.gcda
	rm -f *.gcno
	rm -f units_tests
	clear

re: fclean all

tests_run:
	gcc -o units_tests $(OBJ) $(CFLAG) -lcriterion --coverage
	./units_tests
	gcovr ./units_tests
	gcovr ./units_tests --branches

.PHONY: clean fclean re all run_tests units_tests