/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_squareinit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdjeffal <sdjeffal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 18:29:22 by sdjeffal          #+#    #+#             */
/*   Updated: 2016/01/22 16:23:22 by sdjeffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>

char	**ft_squareinit(size_t length)
{
	char	**map;
	size_t	i;
	size_t	j;

	i = 0;
	if (length)
	{
		map = (char**)malloc(sizeof(char*) * (length + 1));
		while (i < length)
		{
			j = 0;
			map[i] = (char*)malloc(sizeof(char) * (length + 1));
			while (j < length)
			{
				map[i][j] = '.';
				j++;
			}
			map[i][j] = '\0';
			i++;
		}
		map[i] = 0;
		return (map);
	}
	return (NULL);
}
