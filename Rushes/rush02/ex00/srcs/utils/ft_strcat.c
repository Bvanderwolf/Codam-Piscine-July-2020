/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 11:08:36 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/23 11:16:56 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	s1_size;

	i = 0;
	s1_size = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{	
		dest[s1_size + i] = src[i];
		i++;
	}
	dest[s1_size + i] = '\0';
	return (dest);
}
