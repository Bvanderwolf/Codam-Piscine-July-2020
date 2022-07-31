/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimone <asimone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:08:54 by bvan-der          #+#    #+#             */
/*   Updated: 2022/07/10 18:43:12 by asimone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

// Returns the character based on the current position and the user input.
// It does checks in the following order:
// 1. Checks for the left top corner and returns A.
// 2. Checks for the right top corner and returns A.
// 3. Checks for the left bottom corner and returns C.
// 4. Checks for the right bottom corner and return C.
// 5. Returns the character B for the wall.
char	get_character(int current_x, int current_y, int x, int y)
{
	if (current_x == 1 && current_y == 1)
	{
		return ('A');
	}
	if (current_x == x && current_y == 1)
	{
		return ('A');
	}
	if (current_x == 1 && current_y == y)
	{
		return ('C');
	}
	if (current_x == x && current_y == y)
	{
		return ('C');
	}
	return ('B');
}

// Displays a rectangle on the screen based on user input.
// It will return a message if x or y is smaller than 1.
void	write_character(int current_x, int current_y, int x, int y)
{
	char	display_char;

	if (current_x > 1 && current_x < x && current_y > 1 && current_y < y)
	{
		display_char = ' ';
	}
	else
	{
		display_char = get_character(current_x, current_y, x, y);
	}
	ft_putchar(display_char);
}

void	rush(int x, int y)
{
	int	current_x;
	int	current_y;

	current_y = 1;
	while (current_y <= y)
	{
		current_x = 1;
		while (current_x <= x)
		{
			write_character(current_x, current_y, x, y);
			current_x++;
		}
		write(1, "\n", 1);
		current_y++;
	}
}
