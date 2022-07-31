/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_message.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 19:34:50 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/27 19:45:44 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/map_info.h"
#include "../includes/ft_position.h"

void	ft_putnbr(int nbr);

void	map_error(void)
{
	write(1, "map error\n", 10);
}

void	print_position(t_position pos)
{
	write(1, "{ x: ", 5);
	ft_putnbr(pos.x);
	write(1, ", y: ", 5);
	ft_putnbr(pos.y);
	write(1, " }\n", 3);
}

void	print_map(char **map, int x, int y)
{
	int		current_x;
	int		current_y;

	current_y = 1;
	while (current_y < y + 1)
	{
		current_x = 0;
		while (current_x < x)
		{
			write(1, &map[current_y][current_x], 1);
			current_x++;
		}
		write(1, "\n", 1);
		current_y++;
	}
}

void	print_expandable(t_expander exp)
{
	write(1, "{ posX: ", 8);
	ft_putnbr(exp.pos.x);
	write(1, ", posY: ", 8);
	ft_putnbr(exp.pos.y);
	write(1, ", dirX:", 7);
	ft_putnbr(exp.dir.x);
	write(1, "dirY: ", 6);
	ft_putnbr(exp.dir.y);
	write(1, " }\n", 3);
}

void	print_expandables(t_expanderlist list)
{
	int	i;

	i = 0;
	while (i < list.count)
	{
		print_expandable(list.array[i]);
		i++;
	}
}
