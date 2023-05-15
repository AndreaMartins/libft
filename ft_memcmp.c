/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:13:11 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/15 15:24:40 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char	*bb1;
	unsigned char	*bb2;
	size_t			i;

	bb1 = (unsigned char *)b1;
	bb2 = (unsigned char *)b2;
	i = 0;
	while (i < len)
	{
		if (*bb1 != *bb2)
		{
			return (*bb1 - *bb2);
		}
		i++;
		bb1++;
		bb2++;
	}
	return (0);
}
