/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   itowrd.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 10:43:11 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/24 10:06:22 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../includes/ft_strcat.h"
#include "../includes/ft_trim.h"

void	print_nbr(char nbr, int len)
{
	int	three_sum;
	int	digit_after_threesum;

	three_sum = len / 3;
	digit_after_threesum = len % 3;
	printf("num: %c | ", nbr);
	printf("len: %d | ", len);
	printf("threesum: %d | ", len / 3);
	printf("digit after threesum: %d\n", len % 3);
}

void	print_nbrs(char *nbrs)
{
	int	i;
	int	num_count;

	i = 0;
	num_count = ft_strlen(nbrs);
	printf("num count: %d\n", num_count);
	while (nbrs[i] != '\0')
	{
		print_nbr(nbrs[i], num_count - i);
		i++;
	}
}
