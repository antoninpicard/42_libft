/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpicard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:57:22 by anpicard          #+#    #+#             */
/*   Updated: 2024/11/06 12:00:45 by anpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_s;

	i = 0;
	new_s = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = 0;
	return (new_s);
}
