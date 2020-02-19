/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:13:57 by bekim             #+#    #+#             */
/*   Updated: 2020/02/19 15:57:37 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strings(char const *str, char c)
{
	int		index;
	int		count;

	index = 0;
	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			count++;
		while (*str != c && *str)
			str++;
	}
	return (count);
}

static int	str_len(char const *str, char c)
{
	int		size;

	size = 0;
	while (*str != c && *str)
	{
		size++;
		str++;
	}
	return (size);
}

static char	*create_word(char const *str, int len)
{
	char	*word;

	word = ft_strnew(len);
	if (word == NULL)
		return (NULL);
	ft_strncpy(word, str, len);
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		size;
	int		index;
	char	*word;

	index = 0;
	size = count_strings(s, c);
	ret = (char **)malloc(sizeof(char*) * (size + 1));
	if (ret == NULL)
		return (NULL);
	while (index < size)
	{
		while (*s == c)
			s++;
		word = create_word(s, str_len(s, c));
		if (word == NULL)
			return (NULL);
		ret[index] = word;
		while (*s != c && *s)
			s++;
		index++;
	}
	ret[index] = 0;
	return (ret);
}
