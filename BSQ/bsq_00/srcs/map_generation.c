/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   map_generation.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 19:35:50 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/27 19:35:50 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/map_info.h"
#include "../includes/ft_atoi.h"
#include "../includes/error_message.h"
#include <stdlib.h>

int	ft_strlen(char *str);

int	gen_line_count(char *args, int *i)
{
	char	*nbr_str;
	int		size;
	int		nbr;
	int		j;

	size = 1;
	while (ft_isdigit(args[size]) == 1)
		size++;
	nbr_str = (char *)malloc(size);
	if (nbr_str == 0)
		return (-1);
	j = 0;
	while (ft_isdigit(args[*i]) == 1)
	{
		nbr_str[j] = args[*i];
		*i = *i + 1;
		j++;
	}
	nbr = ft_atoi(nbr_str);
	free(nbr_str);
	return (nbr);
}

void	gen_map_info(char **map, t_mapinfo *info)
{
	char	*args;
	int		i;

	i = 0;
	args = map[0];
	info->lcount = 0;
	info->empty = '0';
	info->obstacle = '0';
	info->full = '0';
	if (args[i] == '\0' || args[i] == '\n')
		return ;
	info->lcount = gen_line_count(args, &i);
	if (args[i] == '\0' || args[i] == '\n')
		return ;
	info->empty = args[i];
	if (args[i + 1] == '\0' || args[i + 1] == '\n')
		return ;
	info->obstacle = args[i + 1];
	if (args[i + 2] == '\0' || args[i + 2] == '\n')
		return ;
	info->full = args[i + 2];
	info->width = ft_strlen(map[1]) - 1;
}
