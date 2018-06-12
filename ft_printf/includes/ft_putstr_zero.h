/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_zero.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:16:25 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 00:14:11 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUTSTR_ZERO_H
# define FT_PUTSTR_ZERO_H

# include "libft.h"
# include "ft_printf_objects.h"
# include "prefix.h"

int	ft_putstr_w_zero(char *str, int width, BOOL treat_as_number);
int	ft_putstr_wchart_zero(wchar_t *str, int width);
int	ft_putchar_w_zero(int c, int width);
int	ft_putchar_wchart_zero(wchar_t c, int width);

#endif
