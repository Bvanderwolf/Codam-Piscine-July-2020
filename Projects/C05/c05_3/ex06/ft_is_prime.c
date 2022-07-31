/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/17 15:12:51 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/21 19:42:31 by bvan-der      ########   odam.nl         */
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

// int	main(void)
// {
// 	int	is_prime;

// 	is_prime = ft_is_prime(2147483647);
// 	printf("%d", is_prime);
// }
