/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 11:23:06 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/14 12:32:44 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	while (i < size)
	{
		if (i < src_len)
		{
			dest[i] = src[i];
		}
		i++;
	}
	if (i != 0)
	{
		dest[i] = '\0';
	}
	return (src_len);
}

// int	main(void)
// {
// 	char	dest[6];
// 	char	*src;
// 	src = "abcdef";

// 	ft_strlcpy(dest, src, 8);
// 	//strlcpy(dest, src, 8);
// 	for(int i = 0; i < sizeof(dest); i++)
// 	{
// 		if(dest[i] == '\0')
// 		{
// 			write(1, "0", 1);
// 		}
// 		else
// 		{
// 			write(1, &dest[i], 1);
// 		}
// 	}
// }
