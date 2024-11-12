/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpicard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:03:51 by anpicard          #+#    #+#             */
/*   Updated: 2024/11/12 10:11:40 by anpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((result * 10 + str[i] - '0') / 10 == result)
			result = result * 10 + str[i] - '0';
		else
			return ((sign < 0) * LONG_MIN + (sign > 0) * LONG_MAX);
		i++;
	}
	return (result * sign);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("Int value: %d\n", ft_atoi("9223372036854775809987123"));
// 	printf("Int value: %d\n", atoi("9223372036854775899"));
// 	return (0);
// }
