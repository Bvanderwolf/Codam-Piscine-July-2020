/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 17:00:07 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/21 12:34:18 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*range;

// 	min = -7;
// 	max = 12;
// 	range = ft_range(min, max);
// 	for (int i = 0; i < max - min; i++)
// 		printf("%d ", range[i]);
// }
