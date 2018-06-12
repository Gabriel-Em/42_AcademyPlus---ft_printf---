/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_decimal.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 18:19:56 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 00:02:59 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_UNSIGNED_DECIMAL_H
# define PRINT_UNSIGNED_DECIMAL_H

# include <stdarg.h>
# include "ft_printf_objects.h"
# include "libft.h"
# include "length_cnv.h"
# include "add_precision.h"
# include "ft_putstr_zero.h"

int	print_unsigned_decimal(va_list *valist, int *index, int *pc);

#endif
