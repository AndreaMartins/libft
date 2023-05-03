/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:30:32 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/03 12:19:41 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr_fd(int n, int fd)
{


}
void	ft_putchar(int c)
{
	c = c + 48;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar(-3);
		ft_putnbr(nb * -1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb <= 9 && nb >= 0)
	{
		ft_putchar(nb);
	}
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	return(0);
}*/
