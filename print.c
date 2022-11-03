/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 08:56:39 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/30 08:56:39 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr_un(unsigned int i)
{
	char	*num;
	int		len;

	if (i == 0)
		len = ft_putchar('0');
	else
	{
		num = ft_itoa_un(i);
		len = ft_putstr(num);
		free(num);
	}
	return (len);
}

int	ft_recursive_pointer(unsigned long long ptr)
{
	int	n;

	n = 0;
	if (ptr >= 16)
	{
		n += ft_recursive_pointer(ptr / 16);
		ft_recursive_pointer(ptr % 16);
		return (n + 1);
	}
	else
	{
		if (ptr < 9)
			ft_putchar(ptr + '0');
		else
			ft_putchar((ptr - 10) + 'a');
		return (1);
	}
}

int	ft_print_pointer(unsigned long long ptr)
{
	int	sum;

	sum = 0;
	sum += ft_putstr("0x");
	if (ptr == 0)
		sum += ft_putchar('0');
	else
		sum += ft_recursive_pointer(ptr);
	return (sum);
}

int	ft_printnbr(int i)
{
	char	*num;
	int		len;

	num = ft_itoa(i);
	len = ft_putstr(num);
	free(num);
	return (len);
}
