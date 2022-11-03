/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 08:33:21 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/30 08:33:21 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(char const *s, ...);
int		ft_putchar(char c);
int		ft_search(const char str, va_list list);
int		ft_putstr(char *s);
int		ft_printnbr(int i);
int		ft_recursive_pointer(unsigned long long ptr);
int		ft_print_pointer(unsigned long long ptr);
int		ft_printnbr_un(unsigned int i);
char	*ft_itoa_un(unsigned int n);
int		ft_printnbr_hex(unsigned int n, char str);
int		ft_len_hex(unsigned int n);
void	ft_print_hex(unsigned int n, char str);
int		ft_len_unint(unsigned int n);
char	*ft_int_string(unsigned int n, char *s, int len);
#endif