/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   map_validation.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 19:36:03 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/27 19:47:09 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/map_info.h"
#include "../includes/error_message.h"

int		check_same_line_length(char **map, t_mapinfo info);
int		check_line_breaks(char **map, t_mapinfo info);
int		check_map_info(t_mapinfo info);
int		check_invalid_characters(char **map, t_mapinfo info);

int	validate_map(char **map, t_mapinfo info)
{
	if (check_map_info(info) == 0)
		return (0);
	if (check_line_breaks(map, info) == 0)
		return (0);
	if (check_same_line_length(map, info) == 0)
		return (0);
	if (check_invalid_characters(map, info) == 0)
		return (0);
	return (1);
}

int	check_invalid_characters(char **map, t_mapinfo info)
{
	int		current_x;
	int		current_y;
	char	c;

	current_y = 1;
	while (current_y < info.lcount + 1)
	{
		current_x = 0;
		while (current_x < info.width)
		{
			c = map[current_y][current_x];
			if (c != info.empty && c != info.full && c != info.obstacle)
				return (0);
			current_x++;
		}
		current_y++;
	}
	return (1);
}

int	check_line_breaks(char **map, t_mapinfo info)
{
	int	current_y;

	current_y = 1;
	while (current_y < info.lcount + 1)
	{
		if (map[current_y][info.width] != '\n')
			return (0);
		current_y++;
	}
	return (1);
}

int	check_same_line_length(char **map, t_mapinfo info)
{
	int	required_x;
	int	current_y;
	int	current_x;

	required_x = 0;
	current_x = 0;
	while (map[1][required_x] != '\0')
		required_x++;
	current_y = 1;
	while (current_y < info.lcount + 1)
	{
		current_x = 0;
		while (map[current_y][current_x] != '\0')
			current_x++;
		if (current_x != required_x)
			return (0);
		current_y++;
	}
	return (1);
}
