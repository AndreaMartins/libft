/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:06:59 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/08 19:03:58 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t  n)
{
	char			*destination;
	const char		*source = src;
	size_t	i;

	destination = dest;
	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
