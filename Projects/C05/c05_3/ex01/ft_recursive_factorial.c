/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/15 11:19:54 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/24 10:18:26 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

// int	main(void)
// {
// 	int	nbr;

// 	nbr = -5;
// 	nbr = ft_recursive_factorial(nbr);
// 	printf("%d", nbr);
// }
