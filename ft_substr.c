/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:23:48 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/15 19:43:28 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*cpy_str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	cpy_str = (char *)malloc((len + 1) * sizeof(char));
	if (!cpy_str)
		return (NULL);
	while (i < start)
		i++;
	while (j < len)
	{
		cpy_str[j] = s[i];
		i++;
		j++;
	}
	cpy_str[j] = '\0';
	return (cpy_str);
}
