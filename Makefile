##
## EPITECH PROJECT, 2020
## Vladimir Ilitch Lem-in
## File description:
## MAKEFILE
##

CC	=	gcc

RM	=	rm -f

SRC	=	SRC/main.c \
		SRC/utils.c \
		SRC/comments.c \
		SRC/rooms.c \
		SRC/tunnels.c \
		SRC/ants.c \
		SRC/linked_parser.c \
		SRC/second_utils.c \
		SRC/file_reader.c \
		SRC/second_file_reader.c

OBJ	=	$(SRC:.c=.o)

CDBG += -w

CFLAGS	+=	-I./include -g $(CDBG)

NAME	=	lem_in

all		: $(NAME) clean

$(NAME): $(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
