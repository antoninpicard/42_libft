# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anpicard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 11:02:30 by anpicard          #+#    #+#              #
#    Updated: 2024/11/06 12:26:36 by anpicard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(wildcard *.c)
CC = cc
FLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
NAME = libft

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean;
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 