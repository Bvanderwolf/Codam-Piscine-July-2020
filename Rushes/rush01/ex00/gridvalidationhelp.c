/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   gridvalidationhelp.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/17 18:14:18 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/17 19:53:07 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_viewable(int *nbrs, int i);
int	count_views(int *nbrs, int len);

int	count_views(int *nbrs, int len)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < len)
	{
		if (is_viewable(nbrs, i) == 1)
		{
			count++;
		}
		i++;
	}
	return (count);
}

int	is_viewable(int *nbrs, int i)
{
	int	j;

	if (i == 0)
	{
		return (1);
	}
	j = i - 1;
	while (j >= 0)
	{
		if (nbrs[i] < nbrs[j])
		{
			break ;
		}
		j--;
	}
	if (j == -1)
		return (1);
	return (0);
}
