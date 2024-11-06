/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpicard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:02:48 by anpicard          #+#    #+#             */
/*   Updated: 2024/11/06 11:32:29 by anpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_s;

	i = 0;
	new_s = malloc(sizeof(char) * len);
	if (!new_s)
		return (NULL);
	while (i < len)
	{
		new_s[i] = s[start + i];
		i++;
	}
	return (new_s);
}
