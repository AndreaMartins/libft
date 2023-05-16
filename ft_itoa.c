/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:27:42 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/16 19:46:42 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*fillstr( char *str, long long_num, long num_len, long is_negative)
{
	if (!str || num_len <= is_negative)
		return (NULL);
	if (is_negative == 1)
	{
		str[0] = '-';
		long_num = -long_num;
	}
	str[num_len] = '\0';
	while (num_len > is_negative)
	{
		num_len--;
		str[num_len] = (long_num % 10) + '0';
		long_num /= 10;
	}
	return (str);
}

static long	negative_control(long long_num)
{
	if (long_num < 0)
		return (1);
	else
		return (0);
}

static long	int_len(long long_num)
{
	long	i;

	i = 1;
	while (long_num > 9 || long_num < -9)
	{
		long_num = long_num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	is_negative;
	long	long_num;
	long	num_len;
	char	*str;

	long_num = n;
	is_negative = negative_control(long_num);
	num_len = int_len(long_num) + is_negative;
	str = (char *)malloc((num_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (fillstr(str, long_num, num_len, is_negative));
}
