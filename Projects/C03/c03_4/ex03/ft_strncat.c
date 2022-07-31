/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 17:10:35 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/18 19:48:15 by bvan-der      ########   odam.nl         */
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

unsigned int	ft_min(unsigned int a, unsigned int b)
{
	if (a > b)
	{
		return (b);
	}
	else
	{
		return (a);
	}
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	s1_size;

	i = 0;
	s1_size = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{	
		dest[s1_size + i] = src[i];
		i++;
	}
	dest[s1_size + i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char *src = "ABC";
// 	char dest_true[] = "abc\0defg";
// 	char dest[] = "abc\0defg";
// 	printf("%s\n", strncat(dest_true, src, 2));
// 	printf("%s\n", ft_strncat(dest, src, 2));
// 	for (int i = 0; i < 9; ++i)
// 	{
// 		printf("%d ", dest_true[i]);
// 	}
// 	printf("\n");
// 	for (int i = 0; i < 9; ++i)
// 	{
// 		printf("%d ", dest[i]);
// 	}
// 	printf("\n");
// 	return 0;
// }
