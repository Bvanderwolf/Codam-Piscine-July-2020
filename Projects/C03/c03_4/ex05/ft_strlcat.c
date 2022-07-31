/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/14 09:19:16 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/18 12:04:44 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	cat_count;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	cat_count = size - dest_len - 1;
	while (i < cat_count)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (i != 0 && dest_len + cat_count == size)
	{
		dest[dest_len + 1] = '\0';
	}
	return (dest_len + src_len);
}

// int main(void)
// {
// 	char dest[8] = "du";
// 	char *src = " hast";

// 	//ft_strlcat(dest, src, sizeof(dest));
// 	strlcat(dest, src, sizeof(dest));
// 	for (int i = 0; i < 8; i++)
// 	{
// 		if (dest[i] == '\0')
// 		{
// 			write(1, "0", 1);
// 		}
// 		else
// 		{
// 			write(1, &dest[i], 1);
// 		}
// 	}
// }
