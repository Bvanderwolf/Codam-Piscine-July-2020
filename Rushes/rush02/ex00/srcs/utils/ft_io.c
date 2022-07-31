/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_io.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 11:32:50 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/23 14:56:36 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	print_error(void)
{
	write(1, "Error\n", 6);
}

// void	get_dict_value(int nbr, char *dict_path)
// {
// 	int		fd_to_read;
// 	char	c;
// 	int		bytes;

// 	fd_to_read = open(dict_path, O_RDONLY);
// 	if (fd_to_read == -1)
// 		return ;
// 	bytes = read(fd_to_read, &c, sizeof(c));
// 	while (bytes > 0)
// 	{
// 		write(1, &c, 1);
// 		bytes = read(fd_to_read, &c, sizeof(c));
// 	}
// 	close(fd_to_read);
// }

// int	main(void)
// {
// 	char	*str = "resources/numbers.dict";

// 	get_dict_value(5, str);
// }
