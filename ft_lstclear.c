/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:13:26 by marvin            #+#    #+#             */
/*   Updated: 2022/11/08 18:13:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && del && *lst)
	{
		while (lst && *lst)
		{
			temp = lst->next;
			ft_lstdelone(lst, del);
			*lst = temp;
		}
	}
}