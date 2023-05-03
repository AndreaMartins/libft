/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:42:42 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/03 19:19:17 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Function prototypes */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(const char *string);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
//char *strnstr(const char *big, const char *little, size_t len);

#endif
