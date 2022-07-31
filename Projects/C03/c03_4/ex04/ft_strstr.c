/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 17:46:48 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/18 19:47:45 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	s1_len;
	unsigned int	s2_len;
	unsigned char	c_1;
	unsigned char	c_2;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	while (i < n)
	{
		c_1 = s1[i];
		c_2 = s2[i];
		if (c_1 != c_2)
		{
			return (c_1 - c_2);
		}
		i++;
	}
	if (s2_len == n)
		return (0);
	if (s2_len > n)
		return (c_1);
	return (-c_2);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	first;
	int		to_find_len;

	to_find_len = ft_strlen(to_find);
	if (to_find_len == 0)
	{
		return (str);
	}
	first = to_find[0];
	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] == first && ft_strncmp(&str[i], to_find, to_find_len) == 0)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "abcdefg";
// 	char	*needle1 = "abc";
// 	char	*needle2 = "abd";
// 	char	*needle3 = "gd";

// 	char	*result1 = ft_strstr(str, needle1);
// 	char	*result2 = ft_strstr(str, needle2);
// 	char	*result3 = ft_strstr(str, needle3);
// 	printf("correct: %s ", result1);
// 	printf("incorrect: %s ", result2);
// 	printf("incorrect: %s", result3);
// }
