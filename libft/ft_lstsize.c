/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:29:30 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/14 15:29:30 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int			i;

	i = 0;
	if (!lst)
		return (0);
	while (lst -> next != NULL)
	{
		i++;
		lst = lst -> next;
	}
	if (lst -> next == NULL)
		i++;
	return (i);
}
