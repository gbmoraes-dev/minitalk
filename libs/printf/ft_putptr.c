/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:17:45 by gamoraes          #+#    #+#             */
/*   Updated: 2023/12/20 15:42:30 by gamoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long ptr, char *base)
{
	int	size;

	if ((void *)ptr == NULL || ptr == 0)
	{
		ft_putstr("(nil)");
		size = 5;
		return (size);
	}
	size = 0;
	if (ptr < 16)
	{
		ft_putstr("0x");
		size = 2;
		size += ft_putchar(base[ptr % 16]);
	}
	else if (ptr >= 16)
	{
		size += ft_putptr(ptr / 16, base);
		size += ft_putchar(base[ptr % 16]);
	}
	return (size);
}
