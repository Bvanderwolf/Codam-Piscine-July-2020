/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_scanresult.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 19:35:21 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/27 19:35:22 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_scanresult.h"

int	scanresult_cmp(t_scanresult r1, t_scanresult r2)
{
	if (r1.map == 0 || r1.full_count < r2.full_count)
		return (-1);
	if (r1.full_count > r2.full_count)
		return (1);
	if (r1.pos.y > r2.pos.y)
		return (-1);
	if (r1.pos.y < r2.pos.y)
		return (1);
	if (r1.pos.x > r2.pos.x)
		return (-1);
	if (r1.pos.x < r2.pos.x)
		return (1);
	return (0);
}
