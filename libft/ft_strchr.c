/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpicard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:03:14 by anpicard          #+#    #+#             */
/*   Updated: 2024/11/12 12:18:01 by anpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (++i, s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
	}
	if ((unsigned char)c == '\0')
		return ((char *)s + i);
	return (0);
}
