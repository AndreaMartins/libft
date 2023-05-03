/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:09:21 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/03 16:35:44 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_string_len( char *string)
{
	int	i;

	i = 0;
	while (string[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	i;

	a = ft_string_len(dest);
	b = ft_string_len(src);
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
