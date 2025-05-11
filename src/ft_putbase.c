/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:55:10 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/11 22:13:07 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include "../utils/constants.h"

void	ft_putbase(unsigned long n, t_base base, int *c)
{
	if (n >= (unsigned long)base.length)
		ft_putbase(n / (unsigned long)base.length, base, c);
	ft_putchar(base.charset[n % (unsigned long)base.length], c);
}
