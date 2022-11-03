/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:47:37 by marvin            #+#    #+#             */
/*   Updated: 2022/10/05 13:56:46 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	j;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (ft_strlen(src) + size);
	else
	{
		j = 0;
		while (src[j] != '\0' && j < size - len_dst - 1)
		{
			dst[len_dst + j] = src[j];
			j++;
		}
	}
	dst[len_dst + j] = '\0';
	return (len_dst + len_src);
}
