/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:25:37 by marvin            #+#    #+#             */
/*   Updated: 2022/10/10 14:46:30 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_find;

	len_find = ft_strlen((char *)little);
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && len-- >= len_find)
	{
		if (big[i] == *little
			&& ft_memcmp((char *)&big[i], little, len_find) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
