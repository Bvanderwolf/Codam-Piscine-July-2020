/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   map_info_validation.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 19:35:54 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/27 19:46:51 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/map_info.h"
#include <stdlib.h>

int	check_map_info_duplicates(t_mapinfo info)
{
	int		i;
	int		j;
	char	*crs;
	char	c_to_check;

	crs = malloc(4 * sizeof(char));
	crs[0] = info.empty;
	crs[1] = info.full;
	crs[2] = info.obstacle;
	crs[3] = '\0';
	i = 0;
	while (crs[i] != '\0')
	{
		j = 0;
		c_to_check = crs[i];
		while (crs[j] != '\0')
		{
			if (i != j && c_to_check == crs[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_map_info(t_mapinfo info)
{
	if (info.lcount <= 0 || info.empty == '\0'
		|| info.full == '\0' || info.obstacle == '\0')
	{	
		return (0);
	}
	if (check_map_info_duplicates(info) == 0)
	{
		return (0);
	}
	return (1);
}
