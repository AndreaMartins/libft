/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:11:10 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/03 19:04:23 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;
	unsigned char		*a;
	unsigned char		*b;

	a = (unsigned char *) s1;
	b = (unsigned char *) s2;
	i = 0;
	while (i < n && a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] != b[i])
		{
			return (a[i] - b[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (a[i] - b[i]);
	}
	return (0);
}
