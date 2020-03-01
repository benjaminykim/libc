/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcharsquare.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 05:20:07 by bekim             #+#    #+#             */
/*   Updated: 2020/03/01 05:27:41 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void		ft_printcharsquare(char **array, int dim)
{
	int		i;
	int		j;

	i = 0;
	while (i < dim)
	{
		j = 0;
		while (j < dim)
		{
			ft_putchar(array[i][j]);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
