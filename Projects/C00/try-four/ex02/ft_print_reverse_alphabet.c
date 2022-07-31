/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 18:36:19 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/09 17:33:50 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	number;

	number = 'z';
	while (number >= 'a')
	{
		write(1, &number, 1);
		number--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// }
