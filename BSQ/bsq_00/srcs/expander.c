/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   expander.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 19:34:54 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/27 19:34:55 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_position.h"

t_expander	gen_expander(int x, int y, int dirx, int diry)
{
	t_expander	exp;

	exp.pos = get_pos(x, y);
	exp.dir = get_pos(dirx, diry);
	return (exp);
}

t_expander	get_exp(int x, int y, int dirx, int diry)
{
	t_expander	exp;

	exp.pos.x = x;
	exp.pos.y = y;
	exp.dir.x = dirx;
	exp.dir.y = diry;
	return (exp);
}
