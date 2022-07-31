/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/16 10:17:57 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/17 19:56:26 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		count_ints(char *str);

int		*split_to_int(char *str, int len);

int		**split_to_sections(int *array, int len);

void	map(int x, int y, int **nbrs);

// Checks whether the arguments are valid by doing the following checks:
// 1. Does the argument string contain spaces and digits only.
// 2. Is the digit count 16(4x4), 25(5x5), 36(6x6), 49(7x7), 64(8x8) or 81(9x9).
int	is_valid_args(char *args)
{
	int		i;
	int		d;

	i = 0;
	d = 0;
	while (args[i] != '\0')
	{
		if (args[i] != ' ')
		{
			if (args[i] >= '1' && args[i] <= '4')
			{
				d++;
			}
			else
			{
				return (0);
			}
		}
		i++;
	}
	if (d != 16 && d != 25 && d != 36 && d != 49 && d != 64 && d != 81)
	{
		return (0);
	}
	return (1);
}

int	ft_exit(void)
{
	write(1, "Error!\n", 7);
	return (0);
}

int	main(int argc, char	**argv)
{
	int	l;
	int	*numbers;
	int	**number_sections;

	if (argc < 2)
		return (ft_exit());
	l = count_ints(argv[1]);
	if (l == 0)
		return (ft_exit());
	numbers = split_to_int(argv[1], l);
	number_sections = split_to_sections(numbers, l);
	return (0);
}
