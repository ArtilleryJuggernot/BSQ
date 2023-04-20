/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbiguene <dbiguene@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:55:03 by dbiguene          #+#    #+#             */
/*   Updated: 2022/08/24 18:21:40 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */



#ifndef STDIN_H
# define STDIN_H

char	*parse_stdin_param(char *str);
int		ft_countl_stdin(char *entry);
char	*get_stdin(void);
char	*parse_stdin(void);
int		len_stdin(void);
#endif
