/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:16:14 by gamoraes          #+#    #+#             */
/*   Updated: 2023/12/20 15:42:53 by gamoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	size;

	size = 0;
	if (s)
	{
		i = 0;
		while (s[i])
		{
			ft_putchar(s[i]);
			size++;
			i++;
		}
	}
	else
		size += ft_putstr("(null)");
	return (size);
}
