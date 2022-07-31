/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/09 19:48:36 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/10 10:54:46 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	*a;
	int	*b;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		a = &tab[i];
		b = &tab[j];
		ft_swap(a, b);
		i++;
		j--;
	}
}
