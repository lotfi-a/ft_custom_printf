/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:39:56 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/11 22:14:02 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "utils/constants.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
void	ft_putchar(char s, int *c);
void	ft_putstr(const char *s, int *c);
void	ft_putnbr(int n, int *c);
void	ft_putptr(void *ptr, int *c);
void	ft_putbase(unsigned long n, t_base base, int *c);
#endif // !FT_PRINTF_H
