/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:28:53 by gamoraes          #+#    #+#             */
/*   Updated: 2023/12/13 16:07:24 by gamoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_uns(unsigned int n)
{
	int	size;

	size = 0;
	if (n >= 10)
		size += ft_putnbr_uns(n / 10);
	size += ft_putchar((n % 10) + '0');
	return (size);
}
