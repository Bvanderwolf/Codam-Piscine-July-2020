/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/14 13:05:30 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/18 21:42:58 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr >= 0 && nbr < 10)
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
	else if (nbr > 0)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		write(1, "-", 1);
		ft_putnbr(nbr * -1);
	}
}

// int	main(void)
// {
// 	int	nbr;
// 	int	nbr2;

// 	nbr = -2147483648;
// 	nbr2 = 5;
// 	ft_putnbr(nbr);
// 	ft_putnbr(nbr2);
// }
