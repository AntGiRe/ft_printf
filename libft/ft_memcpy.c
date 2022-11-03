/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:17:08 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/10 10:29:29 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char	*dest;
	char	*src;

	if (!n || str1 == str2)
		return (str1);
	dest = (char *)str1;
	src = (char *)str2;
	while (n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	return (str1);
}
