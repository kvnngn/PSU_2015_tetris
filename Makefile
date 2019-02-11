##
## Makefile for Makefile in /home/nguye_z/rendu/PSU_2015_my_printf
## 
## Made by nguyen kevin
## Login   <nguye_z@epitech.net>
## 
## Started on  Sat Nov 14 03:29:45 2015 nguyen kevin
## Last update Sun Mar 20 23:08:15 2016 hugo marrien
##


NAME	= tetris

PC	= tetris.c \
	  initbcg1.c \
	  initbcg2.c \
	  timer.c \

CFLAGS  = -W -Wall -Wextra -g3

PO	= $(PC:.c=.o)

all:	  $(NAME)

$(NAME) : $(PO)
	make -C lib/my/ re
	make -C lib/my/ clean
	make -C lib/my/
	cc -o $(NAME) $(PO) -lmy $(CFLAGS) -L./lib -lncurses

clean:
	rm -f $(PO)

fclean:	clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re 
