/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 19:35:10 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/27 19:35:11 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_position.h"
#include "../includes/map_info.h"
#include "../includes/ft_list.h"
#include <stdlib.h>

t_expanderlist	gen_explist(void)
{
	t_expanderlist	list;

	list.array = 0;
	list.count = 0;
	return (list);
}

void	add_exp(t_expanderlist *list, t_expander exp)
{
	t_expander	*new_list;
	t_expander	*old_list;
	int			i;

	i = 0;
	new_list = malloc((list->count + 1) * sizeof(t_expander));
	old_list = list->array;
	while (i < list->count)
	{
		new_list[i] = list->array[i];
		i++;
	}
	new_list[i] = exp;
	list->count++;
	list->array = new_list;
	free(old_list);
}

void	remove_exp_at(t_expanderlist *list, int index)
{
	t_expander	*new_list;
	t_expander	*old_list;
	int			i;
	int			j;

	i = 0;
	j = 0;
	new_list = malloc((list->count - 1) * sizeof(t_expander));
	old_list = list->array;
	while (i < list->count)
	{
		if (i != index)
		{
			new_list[j] = old_list[i];
			j++;
		}
		i++;
	}
	list->count--;
	list->array = new_list;
	free(old_list);
}
