/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:07:25 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/04 15:17:00 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (const unsigned char *)src;
	if (dst_ptr == src_ptr || len == 0)
		return (dst);
	if (dst_ptr < src_ptr)
	{
		while (len--)
			*dst_ptr++ = *src_ptr++;
	}
	else
	{
		dst_ptr += len - 1;
		src_ptr += len - 1;
		while (len--)
			*dst_ptr-- = *src_ptr--;
	}
	return (dst);
}
