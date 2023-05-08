/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:06:59 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/04 14:58:59 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char			*destination;
	const char		*source = src;
	unsigned int	i;

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
