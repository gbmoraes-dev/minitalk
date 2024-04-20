/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:35:36 by gamoraes          #+#    #+#             */
/*   Updated: 2024/02/01 16:57:31 by gamoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		size;
	va_list	arg;

	i = 0;
	size = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			size += ft_checkformat(format[i + 1], arg);
			i++;
		}
		else
		{
			ft_putchar(format[i]);
			size++;
		}
		i++;
	}
	va_end(arg);
	return (size);
}
