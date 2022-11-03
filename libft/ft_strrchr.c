/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:32:40 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/10 15:03:49 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen((char *)str) - 1;
	if ((unsigned char)c == '\0')
		return ((char *)&str[i + 1]);
	while (i >= 0)
	{
		if (*(str + i) == (unsigned char)c)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}
