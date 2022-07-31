/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_input.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 16:02:34 by cbijman       #+#    #+#                 */
/*   Updated: 2022/07/27 17:27:43 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INPUT_H
# define FT_INPUT_H

char	*ft_split_printable(char *str, int *pos);
char	**parse_input(char *buffer);
char	**read_input(int *argc);

#endif