# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 12:09:31 by andmart2          #+#    #+#              #
#    Updated: 2023/05/03 19:19:45 by andmart2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

SRCS = ft_strlen.c \
       ft_strlcat.c \
	   ft_strlcpy.c \
	   ft_isalpha.c \
	   ft_isalnum.c \
	   ft_isdigit.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strncmp.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

