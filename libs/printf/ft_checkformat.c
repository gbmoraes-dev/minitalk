/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:12:53 by gamoraes          #+#    #+#             */
/*   Updated: 2024/04/02 17:26:40 by gamoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkformat(char type, va_list arg)
{
	int	size;

	size = 0;
	if (type == 'c')
		size += ft_putchar(va_arg(arg, int));
	else if (type == 's')
		size += ft_putstr(va_arg(arg, char *));
	else if (type == 'p')
		size += ft_putptr(va_arg(arg, unsigned long), "0123456789abcdef");
	else if (type == 'd' || type == 'i')
		size += ft_putnbr(va_arg(arg, int));
	else if (type == 'u')
		size += ft_putnbr_uns(va_arg(arg, unsigned int));
	else if (type == 'x')
		size += ft_puthx(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (type == 'X')
		size += ft_puthx(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (type == '%')
		size += ft_putchar('%');
	return (size);
}
