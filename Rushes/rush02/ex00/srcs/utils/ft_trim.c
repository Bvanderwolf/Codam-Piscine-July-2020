/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_trim.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 12:28:55 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/23 13:14:25 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	digit_count(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

char	*ft_trim_num(char *num_str)
{
	char	*str;
	int		i;
	int		j;
	int		size;

	i = 0;
	size = digit_count(num_str) + 1;
	str = (char *)malloc(size * sizeof(char));
	i = 0;
	j = 0;
	while (num_str[i] != '\0')
	{
		if (ft_isdigit(num_str[i]) == 1)
		{
			str[j] = num_str[i];
			j++;
		}
		i++;
	}
	return (str);
}
