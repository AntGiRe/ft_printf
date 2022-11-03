/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:47:50 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/14 16:47:50 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*counter;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		counter = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = counter;
	}
}
