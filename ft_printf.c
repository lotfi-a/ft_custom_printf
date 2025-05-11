/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 23:00:16 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/11 23:21:14 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "utils/constants.h"

void	handle_char(const char c, va_list args, int *count)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (c == '%')
		ft_putchar('%', count);
}

void	handle_number(const char c, va_list args, int *count)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (c == 'u')
		ft_putbase(va_arg(args, unsigned int), g_base_decimal, count);
}

void	handle_special(const char c, va_list args, int *count)
{
	if (c == 'x')
		ft_putbase(va_arg(args, unsigned int), g_base_hex_lower, count);
	else if (c == 'X')
		ft_putbase(va_arg(args, unsigned int), g_base_hex_upper, count);
	else if (c == 'p')
		ft_putptr(va_arg(args, void *), count);
}

void	parse_format(const char *s, va_list args, int *count)
{
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s == 'c' || *s == 's' || *s == '%')
				handle_char(*s, args, count);
			else if (*s == 'd' || *s == 'i' || *s == 'u')
				handle_number(*s, args, count);
			else if (*s == 'p' || *s == 'x' || *s == 'X')
				handle_special(*s, args, count);
		}
		else
			ft_putchar(*s, count);
		s++;
	}
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;

	if (!s)
		return (-1);
	va_start(args, s);
	count = 0;
	parse_format(s, args, &count);
	va_end(args);
	return (count);
}
