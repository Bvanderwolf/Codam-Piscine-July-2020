/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/16 20:40:57 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/24 10:21:09 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_fibonacci(int n, int a, int b)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	if (n == 1)
		return (b);
	return (ft_recursive_fibonacci(n - 1, b, a + b));
}

int	ft_fibonacci(int index)
{
	return (ft_recursive_fibonacci(index, 0, 1));
}

// int	main(void)
// {
// 	int	fib;

// 	fib = ft_fibonacci(56);
// 	printf("%d", fib);
// }
