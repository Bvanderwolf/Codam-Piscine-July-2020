/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   gridvalidation.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/17 11:23:56 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/19 11:50:35 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*malloc_col(int **grid, int y, int n);
int	*malloc_rev(int	*nrs, int len);
int	count_views(int *nbrs, int len);
int	validate_col_up(int x, int *inpt, int **grid);
int	validate_col_down(int x, int *inpt, int **grid);
int	validate_row_left(int y, int *inpt, int **grid);
int	validate_row_right(int y, int *inpt, int **grid);

int	validate_col_up(int x, int *inpt, int **grid)
{
	int	i;
	int	crnt_inpt;
	int	*col;

	i = 0;
	while (i < x)
	{
		crnt_inpt = inpt[i];
		col = malloc_col(grid, x, i);
		if (crnt_inpt != count_views(col, x))
		{
			return (0);
		}
		free(col);
		i++;
	}
	return (1);
}

int	validate_col_down(int x, int *inpt, int **grid)
{
	int	i;
	int	crnt_inpt;
	int	*col;
	int	*rev;

	i = 0;
	while (i < x)
	{
		crnt_inpt = inpt[i];
		col = malloc_col(grid, x, i);
		rev = malloc_rev(col, x);
		if (crnt_inpt != count_views(rev, x))
		{
			return (0);
		}
		free(col);
		free(rev);
		i++;
	}
	return (1);
}

int	validate_row_left(int y, int *inpt, int **grid)
{
	int	i;
	int	crnt_inpt;
	int	*row;

	i = 0;
	while (i < y)
	{
		crnt_inpt = inpt[i];
		row = grid[i];
		if (crnt_inpt != count_views(row, y))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	validate_row_right(int y, int *inpt, int **grid)
{
	int	i;
	int	crnt_inpt;
	int	*row;
	int	*rev;

	i = 0;
	while (i < y)
	{
		crnt_inpt = inpt[i];
		row = grid[i];
		rev = malloc_rev(row, y);
		if (crnt_inpt != count_views(rev, y))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	validate_grid(int x, int y, int **inpt, int **grid)
{
	if (validate_col_up(x, inpt[0], grid) == 0)
	{
		return (0);
	}
	if (validate_col_down(x, inpt[1], grid) == 0)
	{
		return (0);
	}
	if (validate_row_left(y, inpt[2], grid) == 0)
	{
		return (0);
	}
	if (validate_row_right(y, inpt[3], grid) == 0)
	{
		return (0);
	}
	return (1);
}

int	main(void)
{
	int valid;
	int	*inpt[4];
	int	inpt_1[] = {4, 3, 2, 1};
	int	inpt_2[] = {1, 2, 2, 2};
	int	inpt_3[] = {4, 3, 2, 1};
	int	inpt_4[] = {1, 2, 2, 2};

	inpt[0] = inpt_1;
	inpt[1] = inpt_2;
	inpt[2] = inpt_3;
	inpt[3] = inpt_4;
	int	*grid[4];
	int	grid_1[] = {1, 2, 3, 4};
	int	grid_2[] = {2, 3, 4, 1};
	int	grid_3[] = {3, 4, 1, 2};
	int	grid_4[] = {4, 1, 2, 3};

	grid[0] = grid_1;
	grid[1] = grid_2;
	grid[2] = grid_3;
	grid[3] = grid_4;
	valid = validate_grid(4, 4, inpt, grid);
	printf("%d", valid);
}
