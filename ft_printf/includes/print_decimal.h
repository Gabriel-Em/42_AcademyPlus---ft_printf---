/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 18:18:11 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 00:02:19 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_DECIMAL_H
# define PRINT_DECIMAL_H

# include "libft.h"
# include <stdarg.h>
# include "ft_printf_objects.h"
# include "add_precision.h"
# include "ft_putstr_zero.h"
# include "length_cnv.h"

int print_decimal(va_list *valist, int *index, int *pc);

#endif
