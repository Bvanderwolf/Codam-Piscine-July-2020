/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 19:35:36 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/27 19:45:59 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include "../includes/map_info.h"
#include "../includes/map_generation.h"
#include "../includes/map_validation.h"
#include "../includes/map_scan.h"
#include "../includes/ft_file.h"
#include "../includes/error_message.h"
#include "../includes/ft_input.h"

void		start_mapscan(char *filename);

void	start_mapscan(char *filename)
{
	t_mapinfo		info;
	t_fileresult	file;
	t_scanresult	res;
	char			**map;

	if (read_file(filename, &file) == 0)
	{
		map_error();
		return ;
	}
	map = file.lines;
	gen_map_info(map, &info);
	if (validate_map(map, info) == 0)
	{
		map_error();
		return ;
	}
	res = map_scan(map, info);
	print_map(res.map, info.width, info.lcount);
	free(res.map);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		argv = read_input(&argc);
	}
	else
	{
		argv++;
		argc--;
	}
	i = 0;
	while (i < argc)
	{
		start_mapscan(argv[i]);
		if (argc != 1 && i != argc - 1)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}
