/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strs_to_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 17:05:32 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/28 09:22:41 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_show_tab(t_stock_str *par);

char	*ft_strdup(char	*src, int size)
{
	char	*dup;
	int		i;

	dup = (char *)malloc((size + 1) * sizeof(char));
	if (dup == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_create_stock(char *str, t_stock_str *stock)
{
	int		len;

	if (str == 0)
		return (1);
	len = 0;
	while (str[len] != '\0')
		len++;
	stock->size = len;
	stock->str = str;
	stock->copy = ft_strdup(str, len);
	return (0);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*tab;
	t_stock_str		stock;

	if (ac == 0 || av == 0)
		return (0);
	tab = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (tab == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		if (ft_create_stock(av[i], &stock) == 1)
		{
			free(tab);
			return (0);
		}
		tab[i] = stock;
		i++;
	}
	stock.str = 0;
	stock.copy = 0;
	stock.size = 0;
	tab[i] = stock;
	return (tab);
}

int	main(int argc, char **argv)
{
	t_stock_str	*stocks;
	//t_stock_str	stock;
	int			i;

	i = 0;
	stocks = ft_strs_to_tab(argc, argv);
	// while (i < argc + 1)
	// {
	// 	stock = stocks[i];
	// 	printf("string: %s\n", stock.str);
	// 	printf("size: %d\n", stock.size);
	// 	printf("copy: %s\n", stock.copy);
	// 	i++;
	// }
	ft_show_tab(stocks);
}
