/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpicard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:03:17 by anpicard          #+#    #+#             */
/*   Updated: 2024/11/06 12:29:09 by anpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	int	nb_words;
	int	i;

	i = 0;
	nb_words = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || !s[i])
			nb_words++;
		i++;
	}
	return (nb_words);
}

char	*ft_copy_words(char const *src, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (str)
	{
		while (i < len)
		{
			str[i] = src[i];
			i++;
		}
		str[i] = 0;
		return (str);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	split = (char **) malloc(sizeof(char *) * ft_count_words(s, c));
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			split[k] = ft_copy_words(s + j, i - j);
			k++;
		}
	}
	split[k] = 0;
	return (split);
}
