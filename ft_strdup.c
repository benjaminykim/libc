/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:12:14 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 20:22:17 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *s1)
{
	char *str;

	str = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	return (str);
}
