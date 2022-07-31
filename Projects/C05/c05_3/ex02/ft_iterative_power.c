/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/15 14:12:35 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/24 11:39:09 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 1;
	result = nb;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	int	nbr;
// 	int	power;
// 	int	result;

// 	nbr = 0;
// 	power = 0;
// 	result = ft_iterative_power(nbr, power);
// 	printf("%d", result);
// }
