/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 15:39:16 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/18 19:47:15 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	s1_size;

	i = 0;
	s1_size = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[s1_size + i] = src[i];
		i++;
	}
	dest[s1_size + i] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char dest[8] = "du";
// 	char *src = " hast";

// 	ft_strcat(dest, src);
// 	//strcat(dest, src);
// 	for(int i = 0; i < 8; i++)
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
