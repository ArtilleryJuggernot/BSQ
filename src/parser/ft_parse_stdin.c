/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_stdin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbiguene <dbiguene@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:23:43 by dbiguene          #+#    #+#             */
/*   Updated: 2022/08/24 18:33:56 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char	*parse_stdin_param(char *str)
{
	int		n;
	char	*my_line;
	int		cpt;

	cpt = 0;
	n = 0;
	while (str[n] != '\n')
		n++;

	my_line = malloc(sizeof(char) * n);
	while (cpt < n)
	{
		my_line[cpt] = str[cpt];
		cpt++;
	}
	return (my_line);
}


int	ft_countl_stdin(char *entry)
{
	int	n;
	int	cpt;

	n = 0;
	cpt = 0;
	while (entry[n])
		if (entry[n++] == '\n')
			cpt++;
	return (cpt);
}

char	*get_stdin(void)
{
	char	buffer[100000];
	int		i;
	char	*my_string;
	i = 0;
	while (read(STDIN_FILENO, &buffer[i], 1))
	{
		i++;
	}
	my_string = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (buffer[i])
	{
		my_string[i] = buffer[i];
		i++;
	}
	my_string[i] = '\0';
	return (my_string);
}
