/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:08:17 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 20:20:03 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*ret;
	char	*c;

	ret = ft_strnew(12);
	ft_strclr(ret);
	c = (char *)malloc(sizeof(char) * 2);
	if (n == -2147483648)
		return (ft_strcpy(ret, "-2147483648"));
	if (n < 0)
	{
		ret = ft_strjoin(ret, "-");
		return (ft_strjoin(ret, ft_itoa(n * -1)));
	}
	else if (n >= 10)
		return (ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10)));
	else
	{
		*c = n + '0';
		*(c + 1) = '\0';
		return (ft_strjoin(c, "\0"));
	}
}
