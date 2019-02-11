##
## Makefile for Makefile in /home/nguye_z/rendu/PSU_2015_my_ls_bootstrap/lib/my
## 
## Made by nguyen kevin
## Login   <nguye_z@epitech.net>
## 
## Started on  Tue Nov 17 14:30:36 2015 nguyen kevin
## Last update Sun Mar 20 23:06:56 2016 hugo marrien
##

SRC	=	my_put_nbr.c \
		my_getnbr.c \
		my_putchar.c \
		my_putstr.c \
		my_strlen.c \
		check_tetrimino.c \
		my_strcat.c \
		my_strcpy.c \
		my_getch.c \
		checkifdebug.c \
		lose_or_not.c \
		erase_under.c \
		erase_right.c \
		erase_left.c \
		initcolor.c \
		make_map.c \
		show_map.c \
		show_tetriminos.c \
		aff_next.c \
		square_other.c \
		square_next.c \
		rm_next.c \
		show_tetris.c \
		show_stock.c \
		check_stock.c \
		full_line.c \
		delete_line.c \
		left_collision.c \
		right_collision.c \
		down_collision.c \
		help.c \
		my.c \
		debugg.c \
		debug_output.c \
		getinfo.c \

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

HEAD	=	header.h \

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	mv $(NAME) ..
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
