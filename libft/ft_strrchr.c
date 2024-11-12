/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpicard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:02:53 by anpicard          #+#    #+#             */
/*   Updated: 2024/11/12 11:00:28 by anpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	p;

	i = -1;
	p = -1;
	while (++i, s[i])
	{
		if (s[i] == (unsigned char)c)
			p = i;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s + i);
	if (p == -1)
		return (0);
	return ((char *)s + p);
}
