# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 12:09:31 by andmart2          #+#    #+#              #
#    Updated: 2023/05/10 14:08:58 by andmart2         ###   ########.fr        #
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
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strnstr.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_atoi.c \
	   ft_calloc.c \
	   ft_strdup.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_putendl_fd.c \
	   ft_putchar_fd.c \
	   ft_putnbr_fd.c \
	   ft_putstr_fd.c \
	   ft_striteri.c \
	   *ft_strmapi.c \
	   *ft_itoa.c \
	   **ft_split.c \

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

