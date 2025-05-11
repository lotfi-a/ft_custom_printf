/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constants.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 21:52:18 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/11 22:02:35 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONSTANTS_H
# define CONSTANTS_H

typedef struct s_base
{
	const char		*charset;
	int				length;
}					t_base;

extern const t_base	g_base_decimal;
extern const t_base	g_base_hex_lower;
extern const t_base	g_base_hex_upper;

#endif // CONSTANTS_H
