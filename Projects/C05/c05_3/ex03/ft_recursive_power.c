/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/15 14:31:58 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/24 10:20:22 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

// int	main(void)
// {
// 	int	nbr;
// 	int	power;
// 	int	result;

// 	nbr = 4;
// 	power = 3;
// 	result = ft_recursive_power(nbr, power);
// 	printf("%d", result);
// }
