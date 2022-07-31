/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 17:01:20 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/14 09:14:33 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{	
		c = str[i];
		if (c >= 'A' && c <= 'Z')
		{
			str[i] = c + 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[10] = "A8CDcfGh{0";
// 	ft_strlowcase(str);
// 	write(1, str, sizeof(str));
// }
