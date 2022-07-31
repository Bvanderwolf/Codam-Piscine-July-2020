/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   map_scan.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 12:36:09 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/27 11:12:59 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_SCAN_H
# define MAP_SCAN_H
# include "map_info.h"
# include "ft_scanresult.h"

t_scanresult	map_scan(char **map, t_mapinfo info);

#endif