/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_stock_str.h                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/24 14:54:30 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/24 14:54:34 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

#endif