# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joandre- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 01:29:09 by joandre-          #+#    #+#              #
#    Updated: 2024/05/14 03:26:33 by joandre-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
.SILENT:
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = minitalk
LIBFT = libft/libft.a
SRC = server.c client.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
		$(CC) $(CFLAGS) server.o -o server -L ./libft -lft
		$(CC) $(CFLAGS) client.o -o client -L ./libft -lft
$(LIBFT):
		make bonus -s -C ./libft
		make clean -s -C ./libft

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf server client
		make fclean -s -C ./libft

re: fclean all
