/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:10:45 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/08 12:11:03 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	cc;

	cc = (char) c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == cc)
		{
			return ((char *) &s[len]);
		}
		len --;
	}
	return (NULL);
}
