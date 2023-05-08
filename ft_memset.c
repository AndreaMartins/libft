/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:16:36 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/04 11:18:44 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *s, int c, unsigned int n)
{
	unsigned char *str = (unsigned char *)s;
	unsigned char value = (unsigned char)c;
	unsigned int i;

	i = 0;

	while ( i < n)
	{
		str[i] = value;
		i++;
	}
	return(s);
}

