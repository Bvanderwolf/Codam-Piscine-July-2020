/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 17:38:08 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/21 09:01:23 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_larger(char a, char b);

int	ft_strcmp(char *s1, char *s2);

int	ft_larger(char a, char b)
{
	if (a > b)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	int				s1_len;
	int				s2_len;
	unsigned char	c_1;
	unsigned char	c_2;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	while (i < s1_len)
	{
		c_1 = s1[i];
		c_2 = s2[i];
		if (c_1 != c_2)
		{
			return (ft_larger(c_1, c_2));
		}
		i++;
	}
	if (s1_len == s2_len)
		return (0);
	if (s1_len > s2_len)
		return (1);
	return (-1);
}
