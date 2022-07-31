/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 14:28:42 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/09 17:33:21 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	number;

	number = 'a';
	while (number <= 'z')
	{
		write(1, &number, 1);
		number++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
