/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:28:09 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/17 12:04:02 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*cpy_str;
	unsigned int	s_len;
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		s_len = ft_strlen(s);
		cpy_str = malloc((s_len + 1) * sizeof(char));
		if (!cpy_str)
			return (NULL);
		while (i < s_len)
		{
			cpy_str[i] = f (i, s[i]);
			i++;
		}
		cpy_str[i] = '\0';
		return (cpy_str);
	}
	return (NULL);
}
