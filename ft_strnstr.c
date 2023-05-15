/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:13:33 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/15 18:24:01 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	newlen;
	char			*newbig;

	i = 0;
	j = 0;
	newbig = (char *)big;
	newlen = (unsigned int)len;
	if (!(*little))
		return (newbig);
	while (newbig[i] != '\0'
		&& i <= newlen - 1 && len != 0)
	{
		while ((little[j] == newbig[i + j])
			&& newbig[i + j] != '\0' && (i + j) <= newlen - 1)
			j++;
		if (little[j] == '\0')
			return (newbig + i);
		j = 0;
		i++;
	}
	return (0);
}
