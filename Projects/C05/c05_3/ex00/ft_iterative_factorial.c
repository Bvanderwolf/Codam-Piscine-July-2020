/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/15 09:54:00 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/24 10:18:30 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	i = 1;
	fact = 1;
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}

// int	main(void)
// {
// 	int	nbr;

// 	nbr = -5;
// 	nbr = ft_iterative_factorial(nbr);
// 	printf("%d", nbr);
// }
