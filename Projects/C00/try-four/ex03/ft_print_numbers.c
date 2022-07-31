/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 19:15:22 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/09 17:34:23 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int		number;
	char	c;

	number = 0;
	while (number <= 9)
	{
		c = number + '0';
		write(1, &c, 1);
		number++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// }
