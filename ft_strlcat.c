/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:09:21 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/03 19:19:50 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	i;

	a = ft_strlen(dest);
	b = ft_strlen(src);
	i = 0;
	if ((size <= a) || (size == 0))
	{
		return (size + b);
	}
	while (src[i] != '\0' && (i < (size - a - 1)))
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	return (a + b);
}
