# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joandre- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 01:29:09 by joandre-          #+#    #+#              #
#    Updated: 2024/06/07 10:07:17 by joandre-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = server client
LIBFT = libft/libftprintf.a
SRC = server.c client.c
OBJ = $(SRC:.c=.o)
NAME_BONUS = server_bonus client_bonus
SRC_BONUS = server_bonus.c client_bonus.c
OBJ_BONUS = $(SRC_BONUS:.c=.o)


all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
		$(CC) $(CFLAGS) server.o -o server -L ./libft -lftprintf
		$(CC) $(CFLAGS) client.o -o client -L ./libft -lftprintf
$(LIBFT):
		make -s -C ./libft

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(LIBFT) $(OBJ_BONUS)
	$(CC) $(CFLAGS) server_bonus.o -o server_bonus -L ./libft -lftprintf
	$(CC) $(CFLAGS) client_bonus.o -o client_bonus -L ./libft -lftprintf

clean:
		rm -rf $(OBJ) $(OBJ_BONUS)
		make clean -s -C ./libft

fclean: clean
		rm -rf $(NAME) $(NAME_BONUS)
		make fclean -s -C ./libft

re: fclean all
