# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anpicard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 11:02:30 by anpicard          #+#    #+#              #
#    Updated: 2024/11/12 15:40:54 by anpicard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_strlen.c \
        ft_atoi.c \
        ft_isalpha.c \
        ft_isdigit.c \
        ft_isalnum.c \
        ft_isascii.c \
        ft_isprint.c \
        ft_memset.c \
        ft_bzero.c \
        ft_memcpy.c \
        ft_memmove.c \
        ft_strlcpy.c \
        ft_strlcat.c \
        ft_toupper.c \
        ft_tolower.c \
        ft_strchr.c \
        ft_strrchr.c \
        ft_strncmp.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_strnstr.c \
        ft_strdup.c \
        ft_calloc.c \
        ft_calloc.c \
        ft_substr.c \
        ft_strjoin.c \
        ft_strtrim.c \
        ft_split.c \
        ft_itoa.c \
        ft_strmapi.c \
        ft_striteri.c \
        ft_putchar_fd.c \
        ft_putstr_fd.c \
        ft_putendl_fd.c \
        ft_putnbr_fd.c

SRCS_BONUS = ft_lstadd_back_bonus.c \
	ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c

CC = cc
FLAGS = -Wall -Wextra -Werror
HEADER = libft.h
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(OBJS) $(SRCS_BONUS:.c=.o)
NAME = libft.a

%.o: %.c $(HEADER) Makefile
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus:	$(OBJS_BONUS)
	ar rc $(NAME) $(OBJS_BONUS)

clean:
	rm -f $(OBJS_BONUS)

fclean: clean;
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus