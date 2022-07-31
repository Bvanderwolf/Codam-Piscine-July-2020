/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_scanresult.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 09:30:43 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/27 09:40:25 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SCANRESULT_H
# define FT_SCANRESULT_H
# include "ft_position.h"

typedef struct s_scanresult
{
	int			full_count;
	t_position	pos;
	char		**map;
}	t_scanresult;

#endif