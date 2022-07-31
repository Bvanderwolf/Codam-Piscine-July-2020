/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 09:29:25 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/14 09:07:30 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

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

// int	main(void)
// {
// 	char	dest[10];
// 	char	src[] = "abcdefg";

// 	ft_strcpy(dest, src);
// 	//strcpy(dest, src);
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
