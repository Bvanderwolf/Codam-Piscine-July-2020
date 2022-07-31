/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 08:59:19 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/10 11:35:34 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_write_number(int i, int j, int k);

void	ft_print_comb(void);

void	ft_write(int i, int j, int k);

void	ft_write_number(int i, int j, int k)
{
	char	numbers[3];
	int		size;

	numbers[0] = i + '0';
	numbers[1] = j + '0';
	numbers[2] = k + '0';
	size = sizeof(numbers);
	write(1, numbers, size);
}

void	ft_write(int i, int j, int k)
{
	while (i <= 9)
	{
		j = 1;
		while (j <= 9)
		{
			k = 2;
			while (k <= 9)
			{
				if (i < j && j < k)
				{
					ft_write_number(i, j, k);
					if (!(i == 7 && j == 8 && k == 9))
					{
						write(1, ", ", 2);
					}
				}								
				k++;
			}	
			j++;
		}
		i++;
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 2;
	ft_write(i, j, k);
}

// int	main(void)
// {
// 	ft_print_comb();
// }
