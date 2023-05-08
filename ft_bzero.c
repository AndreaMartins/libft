/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:17:20 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/04 15:26:30 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(void *s, unsigned int n)
{
	unsigned char *str = (unsigned char *)s;
	unsigned  int i;

	i = 0;
	while ( i < n)
	{
		str[i] = 0;
		i++;
	}
}
