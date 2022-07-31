/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 15:09:50 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/19 14:38:24 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_larger(unsigned char a, unsigned char b)
{
	if (a > b)
	{
		return (1);
	}
	else if (a == b)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < n - 1)
	{
		if (s1[i] == s2[i] && s1[i] == '\0')
			return (0);
		i++;
	}
	return (ft_larger(s1[i], s2[i]));
}

int main()
{
	printf("%d %d\n", ft_strncmp("abc", "de", 3), strncmp("abc", "de", 3));
	printf("%d %d\n", ft_strncmp("de", "abc", 3), strncmp("de", "abc", 3));
	printf("%d %d\n", ft_strncmp("aaa", "aa", 3), strncmp("aaa", "aa", 3));
	printf("%d %d\n", ft_strncmp("aa", "aaa", 3), strncmp("aa", "aaa", 3));
	printf("%d %d\n", ft_strncmp("abc", "abc", 3), strncmp("abc", "abc", 3));
	printf("%d %d\n", ft_strncmp("", "", 3), strncmp("", "", 3));
	printf("%d %d\n", ft_strncmp("", "\200", 3), strncmp("", "\200", 3));

	printf("%d %d\n", ft_strncmp("abc", "de", 0), strncmp("abc", "de", 0));
	printf("%d %d\n", ft_strncmp("abc", "ab", 2), strncmp("abc", "ab", 2));
	printf("%d %d\n", ft_strncmp("abc", "abd", 2), strncmp("abc", "abd", 2));
	printf("%d %d\n", ft_strncmp("abc", "bad", 2), strncmp("abc", "bad", 2));
	printf("%d %d\n", ft_strncmp("bac", "abd", 2), strncmp("bac", "abd", 2));
	return 0;
}
