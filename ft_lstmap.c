/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagger <jbagger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:35:24 by marvin            #+#    #+#             */
/*   Updated: 2022/11/14 14:37:28 by jbagger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_start;
// 	t_list	*new_temp;
// 	t_list	*lst_start;

// 	lst_start = lst;
// 	new_start = ft_lstnew((*f)(lst->content));
// 	new_temp = new_start;
// 	while (lst)
// 	{
// 		new_temp->next = ft_lstnew((*f)(lst->content));
// 		lst = lst->next;
// 	}

// 	ft_lstiter(lst_start, del);
// 	return (new_start);
// }

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*i;

	if (!lst && !f)
		return (NULL);
	temp = NULL;
	while (lst)
	{
		if (!(i = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&temp, del);
			return (NULL);
		}
		ft_lstadd_back(&temp, i);
		lst = lst->next;
		i = i->next;
	}
	return (temp);
}