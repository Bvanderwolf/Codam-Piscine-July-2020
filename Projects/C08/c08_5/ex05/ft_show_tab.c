/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_show_tab.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 21:19:25 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/24 14:55:48 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
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

void	ft_putstock(t_stock_str stock)
{
	write(1, stock.str, stock.size);
	write(1, "\n", 1);
	ft_putnbr(stock.size);
	write(1, "\n", 1);
	write(1, stock.copy, stock.size);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (((t_stock_str)par[i]).str != 0)
	{
		ft_putstock((t_stock_str)par[i]);
		i++;
	}
}
