/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:20:57 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/08 18:45:06 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	total_size;

	total_size = count* size;
	str = malloc(total_size);

	if (str == NULL)
	{
		return(NULL);
	}
	ft_bzero (str, total_size);
	return (str);
}
