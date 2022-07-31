/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 15:43:12 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/14 09:14:39 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 0 && c <= 31)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int		num1;
// 	int		num2;
// 	char	*printable;
// 	char	nonprintable[6];

// 	printable = "ac15][";
// 	nonprintable[0] = 48;
// 	nonprintable[1] = 9;
// 	nonprintable[2] = 55;
// 	nonprintable[3] = 3;
// 	nonprintable[4] = 60;
// 	nonprintable[5] = 49;

// 	num1 = ft_str_is_printable(printable);
// 	num2 = ft_str_is_printable(nonprintable);
// 	printf("printable: %d, nonprintable: %d", num1, num2);
// }
