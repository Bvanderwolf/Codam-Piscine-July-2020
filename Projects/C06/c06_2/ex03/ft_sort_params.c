/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 15:06:30 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/20 12:40:14 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_larger(char a, char b)
{
	if (a > b)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	int				s1_len;
	int				s2_len;
	unsigned char	c_1;
	unsigned char	c_2;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	while (i < s1_len)
	{
		c_1 = s1[i];
		c_2 = s2[i];
		if (c_1 != c_2)
		{
			return (ft_larger(c_1, c_2));
		}
		i++;
	}
	if (s1_len == s2_len)
		return (0);
	if (s1_len > s2_len)
		return (1);
	return (-1);
}

void	ft_sort_str_params(char **argv, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
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
	ft_sort_str_params(argv, argc - 1);
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
