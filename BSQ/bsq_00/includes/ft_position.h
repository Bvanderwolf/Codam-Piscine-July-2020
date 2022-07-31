/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_position.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 14:49:59 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/26 16:13:20 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POSITION_H
# define FT_POSITION_H
# include "../includes/map_info.h"

typedef struct s_position
{
	int	x;
	int	y;
}	t_position;

typedef struct s_expander
{
	t_position	pos;
	t_position	dir;
}	t_expander;

typedef struct s_expanderlist
{
	int			count;
	t_expander	*array;
}	t_expanderlist;

t_position	get_pos(int x, int y);
int			expand_available(char **map, t_expanderlist exps, t_mapinfo info);
int			pos_available(char **map, t_mapinfo info, t_position pos);
int			pos_out_of_bounds(t_mapinfo info, t_position pos);
void		print_position(t_position pos);
t_expander	get_exp(int x, int y, int dirx, int diry);

#endif