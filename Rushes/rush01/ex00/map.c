/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   map.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/16 10:25:27 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/19 11:34:38 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	map_cols_up(int x, int **nbrs)
{
	int		i;
	char	c;

	i = 0;
	write(1, "  ", 2);
	while (i < x)
	{
		c = nbrs[0][i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
	}
}

void	map_cols_down(int x, int **nbrs)
{
	int		i;
	char	c;

	i = 0;
	write(1, "  ", 2);
	while (i < x)
	{
		c = nbrs[1][i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
	}
}

void	map_rows(int y, int **nbrs)
{
	int		i;
	char	c;

	i = 0;
	while (i < y)
	{
		c = nbrs[2][i] + '0';
		write(1, &c, 1);
		write(1, " x x x x ", 9);
		c = nbrs[3][i] + '0';
		write(1, &c, 1);
		i++;
		write(1, "\n", 1);
	}
}

void	map(int x, int y, int **nbrs)
{
	map_cols_up(x, nbrs);
	write(1, "\n", 1);
	map_rows(y, nbrs);
	map_cols_down(x, nbrs);
	write(1, "\n", 1);
}

int	main(void)
{
	int	**nbrs;
	int	*columns_top;
	int	*columns_bot;
	int	*rows_left;
	int	*rows_right;

	nbrs = malloc(4 * sizeof(int *));
	columns_top = (int *)malloc(4 * sizeof(int *));
	columns_bot = (int *)malloc(4 * sizeof(int *));
	rows_left = (int *)malloc(4 * sizeof(int *));
	rows_right = (int *)malloc(4 * sizeof(int *));
	columns_top[0] = 1;
	columns_top[1] = 2;
	columns_top[2] = 2;
	columns_top[3] = 2;
	columns_bot[0] = 4;
	columns_bot[1] = 3;
	columns_bot[2] = 2;
	columns_bot[3] = 1;
	rows_left[0] = 1;
	rows_left[1] = 2;
	rows_left[2] = 3;
	rows_left[3] = 4;
	rows_right[0] = 2;
	rows_right[1] = 2;
	rows_right[2] = 2;
	rows_right[3] = 1;
	nbrs[0] = columns_top;
	nbrs[1] = columns_bot;
	nbrs[2] = rows_left;
	nbrs[3] = rows_right;
	map(4, 4, nbrs);
}
