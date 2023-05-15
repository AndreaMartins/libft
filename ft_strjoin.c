/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:26:10 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/15 18:30:09 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	size_t	j;
	char	*bigstring;

	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	bigstring = (char *)malloc(len_s1 + len_s2 + 1);
	if (!bigstring)
		return (NULL);
	while (i < len_s1)
	{
		bigstring[i] = s1[i];
		i++;
	}
	while (j < len_s2)
	{
		bigstring[i + j] = s2[j];
		j++;
	}
	bigstring[i + j] = '\0';
	return (bigstring);
}
/*int main(int argc, char **argv)
{
	char *join;
	if (argc == 3)
	{
		printf("STR1: %s\n",argv[1]);
		printf("STR2: %s\n",argv[2]);
		join = ft_strjoin(argv[1],argv[2]);
		printf("JOIN: %s",join);
		free (join);
	}
	else
		printf("INVALID ARGUMENTS\n");
	return (0);
}*/
