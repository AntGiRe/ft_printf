/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:21:02 by agil-rey          #+#    #+#             */
/*   Updated: 2022/11/02 15:21:02 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_hex(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		i++;
		n /= 16;
	}
	return (i);
}

void	ft_print_hex(unsigned int n, char str)
{
	if (n >= 16)
	{
		ft_print_hex(n / 16, str);
		ft_print_hex(n % 16, str);
	}
	else
	{
		if (n <= 9)
		{
			ft_putchar(n + '0');
		}
		else
		{
			if (str == 'x')
				ft_putchar((n - 10) + 'a');
			if (str == 'X')
				ft_putchar((n - 10) + 'A');
		}
	}
}

int	ft_printnbr_hex(unsigned int n, char str)
{
	if (n == 0)
		return (ft_putchar('0'));
	else
		ft_print_hex(n, str);
	return (ft_len_hex(n));
}
