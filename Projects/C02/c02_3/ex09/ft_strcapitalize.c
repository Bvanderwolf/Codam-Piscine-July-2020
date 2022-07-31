/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 20:10:51 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/14 12:53:51 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_char_is_numeric_or_alpha(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

void	next_char_capital(char *str, int i)
{
	char	c;

	c = str[i + 1];
	if (c != '\0' && ft_char_is_lowercase(c) == 1)
	{
		str[i + 1] = c - 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (i == 0 && ft_char_is_lowercase(c) == 1)
		{
			str[i] = c - 32;
		}
		else if (ft_char_is_numeric_or_alpha(c) == 0)
		{
			next_char_capital(str, i);
			i++;
		}
		else if (ft_char_is_uppercase(c) == 1)
		{
			str[i] = c + 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "salut, vas ? 42mots quaRante-deux; cinquante+et+un";
// 	ft_strcapitalize(str);

// 	write(1, str, sizeof(str));
// }
