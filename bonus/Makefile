##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## printf
##

SRC	=	lib/my/my_printf.c		\
		lib/my/my_putchar.c		\
		lib/my/my_put_nbr.c		\
		lib/my/my_putstr.c		\
		lib/my/main.c			\
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

OBJ	=	$(SRC:.c=.o)

NAME	=	a.out

all:	 $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) -Wall -Wextra $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
