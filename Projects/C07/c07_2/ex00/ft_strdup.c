/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 16:38:41 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/21 12:34:06 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char	*src)
{
	char	*dup;
	int		size;

	size = ft_strlen(src);
	dup = (char *)malloc(size * sizeof(char));
	ft_strcpy(dup, src);
	return (dup);
}

// int	main(void)
// {
// 	char	str[] = "abcdefg";
// 	char		*str_dup;

// 	str_dup = ft_strdup(str);
// 	write(1, str_dup, sizeof(str));
// }
