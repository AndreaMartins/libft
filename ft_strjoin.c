/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:26:10 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/09 16:46:24 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t len_s1;
	size_t len_s2;
	int i;
	char *bigstring;

	i = 0;
	
	if ( !s1 && !s2)
		return (NULL);
	else if (!s1)
		ft_strdup(s2);
	else if (!s2)
		ft_strdup(s1);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	bigstring = (char *)malloc(len_s1 + len_s2 + 1);
	if (!bigstring)
		return(NULL);
	if (i <= len_s1)
	{
		bigstring[i] = s1[i];
	}
	if (i <= len_s2)
	{
		bigstring[i]
	}
	ft_strcpy(bigstring, s1);
	ft_strcat(bigstring, s2);
	return(result);
}
