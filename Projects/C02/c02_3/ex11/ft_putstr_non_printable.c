/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_non_printable.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 12:17:56 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/14 09:14:24 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_printable(char c)
{
	if (c >= 0 && c <= 31)
	{
		return (0);
	}
	return (1);
}

char	*ft_char_to_hex(char c, char *hex)
{
	int		decimal;
	char	*data;

	decimal = c;
	data = "0123456789abcdef";
	hex[0] = data[decimal / 16];
	hex[1] = data[decimal % 16];
	return (hex);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;
	char	hex[2];

	hex[0] = '0';
	hex[1] = '0';
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (ft_char_is_printable(c) == 1)
		{
			write(1, &c, 1);
		}
		else
		{
			write(1, "\\", 1);
			ft_char_to_hex(c, hex);
			write(1, hex, 2);
		}
		i++;
	}
}

// int	main(void)
// {
// 	char	str[] = "\nbdc\ndea\n";
// 	ft_putstr_non_printable(str);
// }
