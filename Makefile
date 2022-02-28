##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	window.c	\
		main.c	\
		sounds.c	\
		sprite.c	\
		spritetwo.c	\
		spritethree.c	\
		parallax.c	\
		score.c	\

OBJ	=	$(SRC:.c=.o)

CC = cc -g

NAME	=	my_runner

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lcsfml-graphics \
	 -lcsfml-system -lcsfml-window -lcsfml-audio

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
