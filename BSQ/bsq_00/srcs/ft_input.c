/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_input.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 14:41:42 by cbijman       #+#    #+#                 */
/*   Updated: 2022/07/27 19:46:26 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include "../includes/ft_file.h"

void	ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);

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
	int	count;
	int	c_len;

	i = 0;
	count = 0;
	c_len = ft_strlen(charset);
	while (str[i] != '\0')
	{
		if (str[i] == charset[0] && ft_strncmp(&str[i], charset, c_len) == 0)
		{
			while (str[i] == charset[0]
				&& ft_strncmp(&str[i], charset, c_len) == 0)
			{
				i += c_len;
			}
			count++;
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
	char	*next_str;
	int		size;
	int		c_len;
	int		j;

	size = 1;
	c_len = ft_strlen(charset);
	while (str[*i] != '\0' && ft_strncmp(&str[*i], charset, c_len) == 0)
		*i = *i + c_len;
	while (str[*i] != '\0' && ft_strncmp(&str[*i], charset, c_len) != 0)
	{
		*i = *i + 1;
		size++;
	}
	next_str = (char *)malloc(size * sizeof(char));
	*i = *i - size + 1;
	j = 0;
	while (str[*i] != '\0' && ft_strncmp(&str[*i], charset, c_len) != 0)
	{
		next_str[j] = str[*i];
		*i = *i + 1;
		j++;
	}
	next_str[j] = '\0';
	return (next_str);
}

char	**ft_split(char *str, char *charset, int *split_count)
{
	char	**split;
	int		i;
	int		crnt_split_count;
	int		c_len;

	i = 0;
	crnt_split_count = 0;
	*split_count = ft_split_count(str, charset);
	split = malloc((*split_count + 1) * sizeof(char *) + (1 * sizeof(char *)));
	c_len = ft_strlen(charset);
	while (crnt_split_count < *split_count + 1)
	{
		split[crnt_split_count] = ft_next_str(str, charset, &i);
		i += c_len;
		crnt_split_count++;
	}
	split[crnt_split_count] = 0;
	return (split);
}

char	**read_input(int *argcount)
{
	char	buffer[512];
	char	result[512];
	char	**argv;
	int		try_read;
	int		split_count;

	write(STDOUT_FILENO, "Input: ", 8);
	try_read = read(STDIN_FILENO, &buffer, sizeof(buffer));
	if (try_read == 0)
	{
		return (0);
	}
	ft_strncpy(result, buffer, (try_read - 1));
	argv = ft_split(result, " ", &split_count);
	*argcount = split_count + 1;
	return (argv);
}
