/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 22:00:38 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/21 14:39:53 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strs_len(int size, char **strs)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (i < size)
	{
		str = strs[i];
		j = 0;
		while (str[j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_strcat(char *dest, char *src, int *i)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[*i] = src[j];
		*i = *i + 1;
		j++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		str_size;
	int		i;
	int		wrd;

	str_size = ((size - 1) * ft_strlen(sep)) + ft_strs_len(size, strs) + 1;
	str = (char *)malloc(str_size);
	i = 0;
	wrd = 0;
	while (wrd < size)
	{
		ft_strcat(str, strs[wrd], &i);
		if (wrd != size - 1)
			ft_strcat(str, sep, &i);
		wrd++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char	**strs;
// 	char	*str;

// 	strs = malloc(4 * sizeof(char *));
// 	strs[0] = "Mama";
// 	strs[1] = "Mia";
// 	strs[2] = "Pizza";
// 	strs[3] = "Ria";

// 	str = ft_strjoin(5, strs, "");
// 	write(1, str, 21);
// 	free(str);
// }
