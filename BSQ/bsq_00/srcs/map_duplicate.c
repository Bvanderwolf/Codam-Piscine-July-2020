/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   map_duplicate.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 19:35:40 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/27 19:35:40 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/map_info.h"
#include "../includes/error_message.h"
#include <stdlib.h>

int	ft_strlen(char *str);

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

char	*ft_strdup(char	*src)
{
	char	*dup;
	int		size;

	size = ft_strlen(src);
	dup = (char *)malloc(size * sizeof(char));
	ft_strcpy(dup, src);
	return (dup);
}

char	**map_dup(char **map, t_mapinfo info)
{
	int		i;
	char	**dup;
	int		size;

	size = info.lcount + 1;
	dup = malloc(size * sizeof(char *));
	i = 0;
	while (i < size)
	{
		dup[i] = ft_strdup(map[i]);
		i++;
	}
	return (dup);
}
