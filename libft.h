/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:42:42 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/08 14:18:18 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>

/* Function prototypes */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(const char *string);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
void	*ft_memset(void *s, int c, unsigned int n);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int	ft_toupper(int c);
int ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);

#endif
