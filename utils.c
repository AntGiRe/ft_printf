/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:03:18 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/30 09:03:18 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	sum;

	sum = 0;
	if (s == NULL)
		return (ft_putstr("(null)"));
	while (*s)
	{
		ft_putchar(*s);
		s++;
		sum++;
	}
	return (sum);
}

char	*ft_itoa_un(unsigned int n)
{
	char	*s;
	int		len;

	len = ft_len_unint(n);
	s = (char *) malloc((sizeof(char)) * (len + 1));
	if (!s)
		return (0);
	s = ft_int_string(n, s, len - 1);
	s[len] = '\0';
	return (s);
}

int	ft_len_unint(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_int_string(unsigned int n, char *s, int len)
{
	while (n >= 10)
	{
		s[len--] = (n % 10) + '0';
		n = n / 10;
	}
	s[len] = n + '0';
	return (s);
}
