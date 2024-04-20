/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:09:17 by gamoraes          #+#    #+#             */
/*   Updated: 2023/12/13 16:13:40 by gamoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthx(unsigned int hx, char *base)
{
	int	size;

	size = 0;
	if (hx < 16)
		size += ft_putchar(base[hx % 16]);
	else if (hx >= 16)
	{
		size += ft_puthx(hx / 16, base);
		size += ft_putchar(base[hx % 16]);
	}
	return (size);
}
