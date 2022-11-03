/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:48:44 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/13 17:02:18 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenint(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*ft_int_string(int n, char *s, int len)
{
	while (n >= 10)
	{
		s[len--] = (n % 10) + '0';
		n = n / 10;
	}
	s[len] = n + '0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	int		sign;

	sign = 1;
	len = ft_lenint(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = (char *) malloc((sizeof(char)) * (len + 1));
	if (!s)
		return (0);
	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	s = ft_int_string(n, s, len - 1);
	if (sign == -1)
		*s = '-';
	s[len] = '\0';
	return (s);
}
