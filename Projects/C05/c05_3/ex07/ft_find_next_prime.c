/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/17 15:31:36 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/21 19:42:45 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2147483647)
		return (1);
	i = 2;
	if (nb % 2 == 0)
		i++;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	if (nb <= 1)
	{
		return (2);
	}
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	prime = nb;
	while (ft_is_prime(prime) == 0)
	{
		prime++;
	}
	return (prime);
}	

// int	main(void)
// {
// 	int	next_prime;

// 	next_prime = ft_find_next_prime(14);
// 	printf("%d", next_prime);
// }
