/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   anexxe.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/16 15:57:29 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/17 20:01:16 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	validate_grid(int x, int y, int **inpt, int **grid);

void	anexxe(int x, int y, int **inpt)
{
	int	**grid;

	grid = malloc(x * y * sizeof(int));
	validate_grid(x, y, inpt, grid);
}
