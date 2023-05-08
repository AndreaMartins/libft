/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:22:16 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/08 19:22:09 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *copy;
	size_t len;
	
	len = ft_strlen(s1);
	copy = (char *) malloc(sizeof(char)*(len+1));
	if (copy == NULL)
		return(NULL);
	ft_memcpy( copy,s1, len);
	copy[len]='\0';
	return(copy);

}
