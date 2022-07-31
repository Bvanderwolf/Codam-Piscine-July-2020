/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_trim.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 12:36:35 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/23 12:37:15 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TRIM_H
# define FT_TRIM_H

int		digit_count(char *str);
int		ft_isdigit(char c);
char	*ft_trim_num(char *num_str);

#endif