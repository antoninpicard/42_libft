/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpicard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:03:46 by anpicard          #+#    #+#             */
/*   Updated: 2024/11/08 11:14:51 by anpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*arr;
	size_t	i;

	i = 0;
	arr = (char *) malloc(size * nmemb);
	if (!arr)
		return (NULL);
	while (i < nmemb * size)
	{
		arr[i] = 0;
		i++;
	}
	return ((void *) arr);
}
