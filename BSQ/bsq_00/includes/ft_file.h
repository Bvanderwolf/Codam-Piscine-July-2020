/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_file.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 12:35:02 by cbijman       #+#    #+#                 */
/*   Updated: 2022/07/26 15:02:36 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# define FT_FILE_H

typedef struct s_fileresult
{
	int		size;
	int		line_count;
	char	**lines;
}	t_fileresult;

int				ft_validate_file(char *filename);
int				ft_file_size(char *filename);
int				count_lines(char *buffer);
char			**split_to_array(char *buffer);
int				read_file(char *filename, t_fileresult *file);

#endif