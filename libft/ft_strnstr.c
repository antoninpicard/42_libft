/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpicard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:02:56 by anpicard          #+#    #+#             */
/*   Updated: 2024/11/06 11:28:31 by anpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;
	size_t	len_little;

	len_little = ft_strlen(little);
	i = 0;
	if (!big || !little)
		return (NULL);
	if (len_little == 0)
		return ((char *) big);
	while (big[i] && i < len)
	{
		x = 0;
		while (big[i + x] && big[i + x] == little[x] && i + x < len)
			x++;
		if (x == len_little)
			return ((char *) big + i);
		i++;
	}
	return (NULL);
}
