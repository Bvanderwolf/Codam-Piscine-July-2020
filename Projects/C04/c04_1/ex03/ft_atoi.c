/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/14 15:13:51 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/18 21:42:33 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_num_multi(char *str, int	*multi)
{
	int	i;

	i = 0;
	while (str[i] == '+' || str[i] == '-'
		|| str[i] == ' ' || str[i] == '\n'
		|| str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
	{
		if (str[i] == '-')
		{
			*multi *= -1;
		}
		i++;
	}
	return (i);
}

int	ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int		i;
	int		total;
	int		nbr;
	int		multi;

	nbr = 0;
	total = 0;
	multi = 1;
	i = ft_num_multi(str, &multi);
	while (str[i] != '\0' && ft_char_is_numeric(str[i]) == 1)
	{
		nbr = str[i] - '0';
		total += nbr;
		if (ft_char_is_numeric(str[i + 1]))
		{
			total *= 10;
		}
		i++;
	}
	total *= multi;
	return (total);
}

// int	main(void)
// {
// 	char	str[] = "   +---1234abd123";
// 	int	nbr = ft_atoi(str);
// 	printf("mine: %d", nbr);
// }
