/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 10:19:37 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/23 14:57:30 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_trim.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n'
		|| c == '\t' || c == '\v'
		|| c == '\f' || c == '\r')
	{
		return (1);
	}
	return (0);
}

int	find_digit(char *str, int	*min_count)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (ft_isspace(c) == 1)
		{
			i++;
		}
		else if (c == '-')
		{
			*min_count = *min_count + 1;
			i++;
		}
		else if (ft_isdigit(c) == 1)
		{
			return (i);
		}
	}
	return (-1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	min_count;
	int	num;

	min_count = 0;
	result = 0;
	i = find_digit(str, &min_count);
	if (i == -1 || min_count > 1)
		return (0);
	while (ft_isdigit(str[i]) == 1)
	{
		num = str[i] - '0';
		result += num;
		if (ft_isdigit(str[i + 1]) == 1)
		{
			result *= 10;
		}
		i++;
	}
	if (min_count == 1)
		result *= -1;
	return (result);
}
