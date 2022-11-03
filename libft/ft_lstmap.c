/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:01:23 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/14 17:01:23 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;

	if (!lst)
		return (NULL);
	list = ft_lstnew((*f)(lst -> content));
	if (!list)
		return (NULL);
	new = list;
	lst = lst -> next;
	while (lst)
	{
		new ->next = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	return (list);
}
