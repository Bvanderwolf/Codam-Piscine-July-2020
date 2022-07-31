/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_file.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 19:35:04 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/27 19:44:08 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>

#include "../includes/ft_file.h"

int		ft_file_size(char *filename);
int		count_lines(char *buffer);
char	**split_to_array(char *buffer);
int		read_file(char *filename, t_fileresult	*result);
int		ft_strlen(char *str);

int	ft_file_size(char *filename)
{
	int		p;
	int		length;
	int		can_read;
	char	temp;

	can_read = 1;
	length = 0;
	p = open(filename, O_RDONLY);
	if (p == -1)
		return (p);
	while (can_read != 0 && p != 0)
	{
		can_read = read(p, &temp, 1);
		length++;
	}
	close(p);
	return (length);
}

int	read_file(char *filename, t_fileresult	*result)
{
	int				fp;
	int				i;
	char			*buffer;
	int				can_read;

	i = 0;
	can_read = 1;
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	result->size = ft_file_size(filename);
	if (ft_file_size(filename) == -1)
		return (0);
	buffer = (char *)malloc(result->size + 1);
	if (buffer == NULL)
		return (0);
	while (can_read != 0)
		can_read = read(fp, &buffer[i++], 1);
	result->line_count = count_lines(buffer);
	result->lines = split_to_array(buffer);
	close(fp);
	free(buffer);
	return (1);
}

char	**split_to_array(char *buffer)
{
	int		i;
	int		j;
	int		line_index;
	int		total_lines;
	char	**lines;

	i = 0;
	line_index = 0;
	total_lines = count_lines(buffer);
	lines = malloc(total_lines * sizeof(char *));
	if (lines == NULL)
		return (0);
	while (buffer[i] != '\0')
	{
		j = 0;
		lines[line_index] = (char *)malloc(64);
		if (lines[line_index] == NULL)
			return (0);
		while (buffer[i] != '\n' && i < ft_strlen(buffer))
			lines[line_index][j++] = buffer[i++];
		lines[line_index][j] = '\n';
		line_index++;
		i++;
	}
	return (lines);
}

int	count_lines(char *buffer)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = ft_strlen(buffer);
	while (buffer[i] != '\0')
	{
		while (buffer[i] != '\n' && i < size)
		{
			i++;
		}
		j++;
		i++;
	}
	return (j);
}
