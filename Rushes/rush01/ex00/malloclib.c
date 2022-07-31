/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   malloclib.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/17 18:03:13 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/17 19:52:57 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*malloc_col(int **grid, int y, int n)
{
	int	i;
	int	*col;

	col = (int *)malloc(y * sizeof(int));
	i = 0;
	while (i < y)
	{
		col[i] = grid[n][i];
		i++;
	}
	return (col);
}

int	*malloc_rev(int	*nrs, int len)
{
	int	i;
	int	*rev;

	rev = (int *)malloc(len * sizeof(int));
	i = 0;
	while (i < len)
	{
		rev[i] = nrs[len - i - 1];
		i++;
	}
	return (rev);
}
