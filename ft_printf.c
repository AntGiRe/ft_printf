/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 08:31:34 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/30 08:31:34 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_search(const char str, va_list list)
{
	int	cnt;

	cnt = 0;
	if (str == 'c')
		cnt += ft_putchar(va_arg(list, int));
	else if (str == 's')
		cnt += ft_putstr(va_arg(list, char *));
	else if (str == 'p')
		cnt += ft_print_pointer(va_arg(list, long long));
	else if (str == 'd' || str == 'i')
		cnt += ft_printnbr(va_arg(list, int));
	else if (str == 'u')
		cnt += ft_printnbr_un(va_arg(list, unsigned int));
	else if (str == 'x' || str == 'X')
		cnt += ft_printnbr_hex(va_arg(list, unsigned int), str);
	else if (str == '%')
		cnt += ft_putchar('%');
	return (cnt);
}

int	ft_printf(char const *s, ...)
{
	va_list	list;
	int		cnt_ch;

	cnt_ch = 0;
	va_start(list, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			cnt_ch += ft_search((unsigned char)*s++, list);
		}
		else
			cnt_ch += ft_putchar((unsigned char)*s++);
	}
	va_end (list);
	return (cnt_ch);
}
