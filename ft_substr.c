/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:23:48 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/09 15:00:51 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	unsigned int j;
	unsigned int cpy_len;
	char *cpy_str;
	
	i = 0;
	j = 0;
	cpy_len = (unsigned int)len;
	if (ft_strlen(s) <= start)
		cpy_len = 0;
	else if ( len > ft_strlen(s + start))
		cpy_len = ft_strlen(s + start);
	cpy_str = (char *)malloc((cpy_len + 1)*sizeof(char));	
	if (!cpy_str)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		cpy_str[0] = '\0';
		return(cpy_str);	
	}
	while (i < start)
		i++;
	while((j < cpy_len) && ( j <= ft_strlen(s)))
	{
		cpy_str[j] = s[i];
		i++;
		j++;
	}
	cpy_str[j]= '\0';
	return (cpy_str);
}
