/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_position.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 19:35:15 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/27 19:35:16 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_position.h"
#include "../includes/ft_list.h"

int	pos_out_of_bounds(t_mapinfo info, t_position pos)
{
	if (pos.x < 0 || pos.x >= info.width)
		return (1);
	if (pos.y < 1 || pos.y > info.lcount)
		return (1);
	return (0);
}

int	right_down_available(char **map, t_expander rd, t_mapinfo info)
{
	if (!pos_available(map, info, get_pos(rd.pos.x + 1, rd.pos.y + 1))
		|| !pos_available(map, info, get_pos(rd.pos.x + 1, rd.pos.y))
		|| !pos_available(map, info, get_pos(rd.pos.x, rd.pos.y + 1)))
	{
		return (0);
	}
	return (1);
}

int	expand_available(char **map, t_expanderlist exps, t_mapinfo info)
{
	int			i;
	t_expander	exp;

	i = 0;
	while (i < exps.count)
	{
		exp = exps.array[i];
		if (exp.dir.x == 1 && exp.dir.y == 0
			&& pos_available(map, info, get_pos(exp.pos.x + 1, exp.pos.y)) == 0)
		{
			return (0);
		}
		if (exp.dir.x == 1 && exp.dir.y == 1
			&& right_down_available(map, exp, info) == 0)
		{
			return (0);
		}
		if (exp.dir.x == 0 && exp.dir.y == 1
			&& pos_available(map, info, get_pos(exp.pos.x, exp.pos.y + 1)) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	pos_available(char **map, t_mapinfo info, t_position pos)
{
	if (pos_out_of_bounds(info, pos) == 1 || map[pos.y][pos.x] == info.obstacle)
		return (0);
	return (1);
}

t_position	get_pos(int x, int y)
{
	t_position	pos;

	pos.x = x;
	pos.y = y;
	return (pos);
}
