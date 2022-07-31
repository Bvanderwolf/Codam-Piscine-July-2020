/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 15:15:52 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/14 12:54:09 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 'a' && c <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	num1;
// 	int	num2;

// 	num1 = ft_str_is_lowercase("abcdef");
// 	num2 = ft_str_is_lowercase("abcDeF");
// 	printf("lower: %d, not lower: %d", num1, num2);
// }
