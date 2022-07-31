/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 10:36:08 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/28 10:12:39 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// void	ft_nbr(int nbr)
// {
// 	char	c;

// 	c = nbr + '0';
// 	write(1, &c, 1);
// 	write(1, " | ", 3);
// }

// void	ft_print(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// }

// ---------------------

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

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < n - 1)
	{
		if (s1[i] == s2[i] && s1[i] == '\0')
			return (0);
		i++;
	}
	if (s1[i] > s2[i])
		return (1);
	else if (s1[i] == s2[i])
		return (0);
	else
		return (-1);
}

int	ft_split_count(char *str, char *charset)
{
	int	i;
	int	c_len;
	int	count;

	i = 0;
	c_len = ft_strlen(charset);
	count = 0;
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], charset, c_len) == 0 && i != 0)
		{
			count++;
			i += c_len;
			while (ft_strncmp(&str[i], charset, c_len) == 0)
				i += c_len;
		}
		else
		{
			i++;
		}
	}
	return (count);
}

char	*ft_next_str(char *str, char *charset, int *i)
{
	int		c_len;
	char	*next;
	int		size;
	int		size_i;
	int		j;

	size = 0;
	j = 0;
	size_i = *i;
	c_len = ft_strlen(charset);
	return (next);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		split_count;

	split_count = ft_split_count(str, charset);
	split = malloc((split_count + 2) * sizeof(char *));
	i = 0;
	while (i < split_count + 1)
	{
		split[i] = ft_next_str(str, charset, &i);
		i++;
	}
	split[i] = 0;
	return (split);
}

int	main(void)
{
	char	*str1 = "MAMA MIA  HERE I GO AGAIN";
	//char	*str2 = ", THIS, STRING, , HAS, A, , , DOUBLE, SPACE";
	char	*sep = " ";
	char	**mstr1;

	mstr1 = ft_split(str1, sep);
	// write(1, "\n", 1);
	// // ft_print(mstr1[0]);
	// // ft_print(mstr1[1]);
	// // ft_print(mstr1[2]);
	// // ft_print(mstr1[3]);
	// // ft_print(mstr1[4]);
	// // ft_print(mstr1[5]);
}
