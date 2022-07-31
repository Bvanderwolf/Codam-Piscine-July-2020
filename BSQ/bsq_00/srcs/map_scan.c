/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   map_scan.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 19:35:59 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/27 19:35:59 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"
#include "../includes/map_info.h"
#include "../includes/ft_position.h"
#include "../includes/ft_scanresult.h"
#include <stdlib.h>

void	print_map(char **map, int x, int y);
char	**map_dup(char **map, t_mapinfo info);
int		expand_using_list(char **map, t_expanderlist *list, t_mapinfo info);
void	add_expanders(t_expanderlist *list, t_position pos);
int		scanresult_cmp(t_scanresult r1, t_scanresult r2);

int	scan_position(char **map, t_position pos, t_mapinfo info)
{
	t_expanderlist	list;
	int				count;
	int				i;

	count = 1;
	list = gen_explist();
	add_expanders(&list, pos);
	while (list.count != 0)
	{
		if (expand_available(map, list, info) == 1)
		{
			count += list.count;
			expand_using_list(map, &list, info);
		}
		else
		{
			i = list.count - 1;
			while (i >= 0)
			{
				remove_exp_at(&list, i);
				i--;
			}
		}
	}
	return (count);
}

t_scanresult	scan(char **map, int current_x, int current_y, t_mapinfo info)
{
	char			**dup;
	t_position		pos;
	t_scanresult	scan;

	dup = map_dup(map, info);
	pos = get_pos(current_x, current_y);
	scan.pos = pos;
	scan.map = dup;
	if (dup[pos.y][pos.x] == info.obstacle)
	{
		scan.full_count = 0;
	}
	else
	{
		dup[pos.y][pos.x] = info.full;
		scan.full_count = scan_position(dup, pos, info);
	}
	return (scan);
}

t_scanresult	map_scan(char **map, t_mapinfo info)
{
	int				current_x;
	int				current_y;
	t_scanresult	best_scan;
	t_scanresult	scan_result;

	current_y = 1;
	best_scan.map = 0;
	while (current_y < info.lcount + 1)
	{
		current_x = 0;
		while (current_x < info.width)
		{
			scan_result = scan(map, current_x, current_y, info);
			if (scanresult_cmp(best_scan, scan_result) < 0)
			{
				free(best_scan.map);
				best_scan = scan_result;
			}
			else
				free(scan_result.map);
			current_x++;
		}
		current_y++;
	}
	return (best_scan);
}
