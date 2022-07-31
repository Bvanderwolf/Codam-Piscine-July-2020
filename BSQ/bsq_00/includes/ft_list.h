/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 13:30:28 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/26 16:13:12 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include "../includes/ft_position.h"

void			add_exp(t_expanderlist *list, t_expander exp);
t_expanderlist	gen_explist(void);
void			remove_exp_at(t_expanderlist *list, int index);

#endif