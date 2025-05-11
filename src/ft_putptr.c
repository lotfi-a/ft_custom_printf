/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:46 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/11 22:11:44 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include "../utils/constants.h"

void	ft_putptr(void *ptr, int *c)
{
	if (!ptr)
	{
		ft_putstr("(nil)", c);
	}
	else
	{
		ft_putstr("0x", c);
		ft_putbase((unsigned long)ptr, g_base_hex_lower, c);
	}
}
