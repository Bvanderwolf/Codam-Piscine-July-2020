/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 19:16:18 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/21 12:34:35 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	nb;
	int	i;
	int	*array;

	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	if (array == 0)
	{
		return (-1);
	}
	nb = min;
	i = 0;
	while (i < size)
	{
		array[i] = nb;
		nb++;
		i++;
	}
	range[0] = array;
	return (size);
}

// int	main(void)
// {
// 	int	**range;

// 	range = malloc(sizeof(int *));

// 	ft_ultimate_range(range, 0, 166);
// 	for (int i = 0; i < 166; i++)
// 	{
// 		printf("%d ", range[0][i]);
// 	}
// }
