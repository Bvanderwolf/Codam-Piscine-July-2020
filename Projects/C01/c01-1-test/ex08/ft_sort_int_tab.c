/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/10 10:40:56 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/12 10:07:56 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_swap(int *a, int *b)
{
	int	temp;

	if (*a > *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	*a;
	int	*b;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			a = &tab[j];
			b = &tab[j + 1];
			ft_sort_swap(a, b);
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	int	nums[] = { 6, 3, 5, 2, 1 };
// 	ft_sort_int_tab(nums, 5);
// 	for(int i = 0; i < 5; i++)
// 		printf("%d", nums[i]);
// }