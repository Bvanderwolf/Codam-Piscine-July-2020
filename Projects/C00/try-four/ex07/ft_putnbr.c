/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/10 15:36:19 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/10 19:01:29 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr >= 0)
	{
		if (nbr < 9)
		{
			c = nbr + '0';
			ft_putchar(c);
		}
		else
		{
			ft_putnbr(nbr / 10);
			ft_putnbr(nbr % 10);	
		}
	}
}

int	main(void)
{
	int nbr = 4000;
	int nbr2 = 50;
	int nbr1 = 3;

	ft_putnbr(nbr);
	write(1, "\n", 1);
	ft_putnbr(nbr2);
	write(1, "\n", 1);
	ft_putnbr(nbr1);
	write(1, "\n", 1);
}
