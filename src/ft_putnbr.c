/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:51:27 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/11 22:16:08 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include "../utils/constants.h"

void	ft_putnbr(int n, int *c)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-', c);
		nb = -nb;
	}
	if (nb >= g_base_decimal.length)
		ft_putnbr(nb / g_base_decimal.length, c);
	ft_putchar(g_base_decimal.charset[nb % g_base_decimal.length], c);
}
