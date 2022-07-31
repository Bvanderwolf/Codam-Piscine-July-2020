/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stringlib.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/16 11:14:19 by cbijman       #+#    #+#                 */
/*   Updated: 2022/07/19 11:17:01 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

double	ft_sqrt(int number);

int		check_spaces(char *str);

int		count_ints(char *str);

int		*split_to_int(char *str, int len);

int		**split_to_sections(int *array, int len);

double	ft_sqrt(int number)
{
	int	answer;

	answer = number;
	while (number != 0)
	{
		if (answer / number == number)
			return (number);
		number--;
	}
	return (0);
}

int	check_spaces(char *str)
{
	int	c;
	int	space_count;

	c = 0;
	space_count = 0;
	while (str[c])
	{
		if (str[c] == ' ' && str[c + 1] == ' ')
			space_count++;
		if (space_count > 0)
			return (0);
		c++;
	}
	return (1);
}

int	count_ints(char *str)
{
	int	count;
	int	n_count;

	count = 0;
	n_count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= '0' && str[count] <= '9')
		{
			if (str[count + 1] >= '0' && str[count + 1] <= '9')
				return (0);
			if (check_spaces(&str[count]) == 0)
				return (0);
			n_count++;
		}
		count++;
	}
	return (n_count);
}

int	*split_to_int(char *str, int len)
{
	int	*p;
	int	count;
	int	array_count;

	p = (int *)malloc(len * sizeof(int));
	count = 0;
	array_count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= '0' && str[count] <= '9')
		{
			p[array_count] = str[count] - '0';
			array_count++;
		}
		count++;
	}
	return (p);
}

int	**split_to_sections(int *array, int len)
{
	int	**digits;
	int	c;
	int	c1;
	int	c2;
	int	length;

	length = ft_sqrt(len);
	digits = malloc(len * sizeof(int));
	c = 0;
	c2 = 0;
	while (c < length)
	{
		digits[c] = malloc(length * sizeof(int));
		c1 = 0;
		while (c1 < length)
		{
			digits[c][c1] = array[c2];
			c1++;
			c2++;
		}
		c++;
	}
	free(array);
	return (digits);
}
