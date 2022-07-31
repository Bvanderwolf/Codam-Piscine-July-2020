/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-der <bvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 10:31:04 by bvan-der      #+#    #+#                 */
/*   Updated: 2022/07/23 12:37:35 by bvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ATOI_H
# define FT_ATOI_H

int	ft_isspace(char c);
int	find_digit(char *str, int	*min_count);
int	ft_atoi(char *str);

#endif