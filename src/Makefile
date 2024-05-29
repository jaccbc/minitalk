# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joandre- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 01:29:09 by joandre-          #+#    #+#              #
#    Updated: 2024/05/29 16:57:36 by joandre-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = server client
LIBFT = libft/libft.a
SRC = server.c client.c
OBJ = $(SRC:.c=.o)
BONUS = server_bonus client_bonus
B_SRC = server_bonus.c client_bonus.c
B_OBJ = $(B_SRC:.c=.o)


all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
		$(CC) $(CFLAGS) server.o -o server -L ./libft -lft
		$(CC) $(CFLAGS) client.o -o client -L ./libft -lft
$(LIBFT):
		make bonus -s -C ./libft
		make clean -s -C ./libft

bonus: server client

$(BONUS): $(LIBFT) $(B_OBJ)
	$(CC) $(CFLAGS) server_bonus.o -o server -L ./libft -lft
	$(CC) $(CFLAGS) client_bonus.o -o client -L ./libft -lft

clean:
		rm -rf *.o

fclean: clean
		rm -rf server client
		make fclean -s -C ./libft

re: fclean all
