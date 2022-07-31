/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/17 13:33:44 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/22 09:13:44 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 1;
	if (nb == 1)
	{
		return (i);
	}
	result = 1;
	while (result < nb)
	{
		if (result == 2147395600)
			return (0);
		i++;
		result = i * i;
	}
	if (result == nb)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	int	sqr;

// 	sqr = ft_sqrt(144);
// 	printf("%d", sqr);
// }
