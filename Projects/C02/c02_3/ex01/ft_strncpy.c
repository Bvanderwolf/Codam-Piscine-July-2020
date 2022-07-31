/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 11:15:22 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/15 09:38:25 by bvan-der      ########   odam.nl         */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	src_size;

	src_size = ft_strlen(src);
	i = 0;
	while (i < n)
	{
		if (i < src_size)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	array[6];
// 	int		i;

// 	ft_strncpy(array, "abc", 2);
// 	//strncpy(array, "abc", 2);
// 	i = 0;
// 	while (i < 6)
// 	{
// 		if (array[i] == '\0')
// 		{
// 			write(1, "0", 1);
// 		}
// 		else
// 		{
// 			write(1, &array[i], 1);
// 		}
// 		i++;
// 	}
// }
