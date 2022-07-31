/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   map_info.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 10:37:10 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/25 12:32:51 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_INFO_H
# define MAP_INFO_H

typedef struct s_mapinfo
{
	int		lcount;
	int		width;
	char	empty;
	char	full;
	char	obstacle;
}	t_mapinfo;

#endif