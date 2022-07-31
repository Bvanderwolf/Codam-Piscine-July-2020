/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/14 13:05:30 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/27 19:46:36 by cbijman       ########   odam.nl         */
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
