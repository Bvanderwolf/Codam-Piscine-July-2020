/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 10:32:17 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/24 09:25:08 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_trim.h"
#include "../includes/ft_io.h"
#include "../includes/itowrd.h"
#include <stdio.h>

void	print_number_as_word(char *nbr_str, char *dict_path)
{
	(void)dict_path;

	print_nbrs(nbr_str);
}

int	is_valid_unsigned_integer(char *nbr_str)
{
	(void)nbr_str;
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 2 && argc != 3)
	{
		print_error();
		return (0);
	}
	if ((argc == 2 && is_valid_unsigned_integer(argv[1]) != 1)
		|| (argc == 3 && is_valid_unsigned_integer(argv[2]) != 1))
	{
		print_error();
		return (0);
	}
	if (argc == 2)
		print_number_as_word(argv[1], "resources/numbers.dict");
	else
		print_number_as_word(argv[1], argv[2]);
	return (0);
}
