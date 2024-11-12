/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpicard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:02:48 by anpicard          #+#    #+#             */
/*   Updated: 2024/11/12 14:41:12 by anpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*new_s;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	new_s = malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_s[i] = s[start + i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// size_t ft_strlen(const char *s)
// {
//     size_t len = 0;
//     while (s[len])
//         len++;
//     return len;
// }

// int main()
// {
//     const char *str = "Hello, World!";
//     // Test 1: Sous-chaîne à partir d'un index valide
//     char *substr1 = ft_substr(str, 7, 5);
//     if (substr1)
//     {
//         printf("Substr 1: %s\n", substr1);
//         free(substr1);
//     }

//     // Test 2: Sous-chaîne avec un index au-delà de la longueur de la chaîne
//     char *substr2 = ft_substr(str, 20, 5);
//     if (substr2)
//     {
//         printf("Substr 2: %s\n", substr2);
//         free(substr2);
//     }

//     // Test 3: Sous-chaîne qui dépasse la fin de la chaîne
//     char *substr3 = ft_substr(str, 7, 50);
//     if (substr3)
//     {
//         printf("Substr 3: %s\n", substr3);
//         free(substr3);
//     }

//     return 0;
// }