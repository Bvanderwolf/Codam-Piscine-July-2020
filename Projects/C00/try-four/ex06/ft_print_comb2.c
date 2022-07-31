/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/10 08:46:48 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/10 18:50:44 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_numbers(int a, int b)
{
	ft_putchar((a / 10 % 10) + '0');
	ft_putchar((a % 10) + '0');
	ft_putchar(' ');
	ft_putchar((b / 10 % 10) + '0');
	ft_putchar((b % 10) + '0');
	if (!(a == 98 && b == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a < 100)
	{
		b = 1;
		while (b < 100)
		{
			if (a < b)
			{
				write_numbers(a, b);
			}
			b++;
		}
		a++;
	}
}
