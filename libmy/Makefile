##
## Makefile for Fondations in /Users/fritzyx/Dev/etna/Bachelor_ED/fondation/chua_m/libmy
## 
## Made by CHUA Michelle
## Login   <chua_m@etna-alternance.net>
## 
## Started on  Tue Jul 21 16:04:26 2015 CHUA Michelle
## Last update Tue Jul 21 16:04:33 2015 CHUA Michelle
##

CC =	gcc
NAME =	libmy.a
SRC =	*.c 
OBJ =	$(SRC:%.c=%.o)
RM =	rm -f
CFLAGS = -W -Wall -Werror

$(NAME):	
		$(CC) -c $(SRC)
		ar r $(NAME) $(OBJ)
		ranlib $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)

re:		fclean all