/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_squaremin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhervy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 17:46:13 by dhervy            #+#    #+#             */
/*   Updated: 2016/01/22 16:25:20 by sdjeffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_squaremin(int nbp)
{
	int i;
	int res;

	i = 1;
	res = 0;
	nbp = nbp * 4;
	while (nbp > res)
	{
		i += 1;
		res = i * i;
	}
	return (i);
}
