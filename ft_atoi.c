/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:13:50 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/02 19:09:49 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	negative_counter;
	int	number_print;

	i = 0;
	negative_counter = 0;
	number_print = 0;
	while (checkisspace(str[i]) == 0)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative_counter++;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		number_print = number_print * 10 + (str[i] - 48);
		i++;
	}
	if (negative_counter % 2 != 0)
		return (number_print * -1);
	return (number_print);
}
