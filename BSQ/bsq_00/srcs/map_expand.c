/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   map_expand.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 19:35:44 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/27 19:35:44 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"
#include "../includes/map_info.h"
#include "../includes/ft_position.h"

void	add_next_expanders(t_expanderlist *list, t_expander exp)
{
	if (exp.dir.x == 1 && exp.dir.y == 0)
	{
		add_exp(list, get_exp(exp.pos.x, exp.pos.y, exp.dir.x, exp.dir.y));
	}
	else if (exp.dir.x == 1 && exp.dir.y == 1)
	{
		add_exp(list, get_exp(exp.pos.x, exp.pos.y, 1, 0));
		add_exp(list, get_exp(exp.pos.x, exp.pos.y, 1, 1));
		add_exp(list, get_exp(exp.pos.x, exp.pos.y, 0, 1));
	}
	else if (exp.dir.x == 0 && exp.dir.y == 1)
	{
		add_exp(list, get_exp(exp.pos.x, exp.pos.y, exp.dir.x, exp.dir.y));
	}
}

void	add_expanders(t_expanderlist *list, t_position pos)
{
	t_expander	r;
	t_expander	d;
	t_expander	dr;

	r.dir = get_pos(1, 0);
	r.pos = get_pos(pos.x, pos.y);
	d.dir = get_pos(0, 1);
	d.pos = get_pos(pos.x, pos.y);
	dr.dir = get_pos(1, 1);
	dr.pos = get_pos(pos.x, pos.y);
	add_exp(list, d);
	add_exp(list, dr);
	add_exp(list, r);
}

int	expand_using_list(char **map, t_expanderlist *list, t_mapinfo info)
{
	int				i;
	t_expander		exp;

	i = list->count - 1;
	while (i >= 0)
	{
		exp = list->array[i];
		exp.pos.x += exp.dir.x;
		exp.pos.y += exp.dir.y;
		map[exp.pos.y][exp.pos.x] = info.full;
		add_next_expanders(list, exp);
		remove_exp_at(list, i);
		i--;
	}
	return (1);
}
