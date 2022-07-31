/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 14:37:04 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/18 15:01:01 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	strm_rev(char **strm, int len)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		temp = strm[i];
		strm[i] = strm[j];
		strm[j] = temp;
		i++;
		j--;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc < 2)
	{
		return (0);
	}
	argv++;
	strm_rev(argv, argc - 1);
	i = 0;
	while (argv[i] != argv[argc - 1])
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write (1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
