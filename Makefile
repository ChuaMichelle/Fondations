##
## Makefile for Fondations in /Users/fritzyx/Dev/etna/Bachelor_ED/fondation/chua_m
## 
## Made by CHUA Michelle
## Login   <chua_m@etna-alternance.net>
## 
## Started on  Tue Jul 21 16:01:20 2015 CHUA Michelle
## Last update Thu Jul 23 21:44:44 2015 CHUA Michelle
##

CC =	gcc
NAME =	fondation
SRC =	client/main.c \
	client/table.c \
	client/welcome.c \
	client/filter_command.c \
	client/helpers.c \
	client/validate_parameters.c \
	client/socket_creation.c \
	client/interactions.c
OBJ =	$(SRC:%.c=%.o)
RM =	rm -f
LDFLAGS = -L./libmy -lmy
sCFLAGS = -W -Wall -Werror

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

all:		$(NAME)

debug:
		$(CC) -Wall -g $(SRC) -o $(NAME) $(LDFLAGS)

clean:
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)

re:		fclean all