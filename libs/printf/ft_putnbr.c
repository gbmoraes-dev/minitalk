/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:24:49 by gamoraes          #+#    #+#             */
/*   Updated: 2023/12/20 15:49:58 by gamoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int	nb;
	int			size;

	nb = n;
	size = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		size++;
	}
	if (nb >= 10)
		size += ft_putnbr(nb / 10);
	size += ft_putchar((nb % 10) + '0');
	return (size);
}
