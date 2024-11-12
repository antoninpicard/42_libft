/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpicard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:39:32 by anpicard          #+#    #+#             */
/*   Updated: 2024/11/12 10:09:13 by anpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
