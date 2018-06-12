/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexadecimal.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:48:31 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 00:04:04 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_HEXADECIMAL_H
# define PRINT_HEXADECIMAL_H

# include <stdarg.h>
# include "ft_printf_objects.h"
# include "libft.h"
# include "add_precision.h"
# include "length_cnv.h"
# include "ft_putstr_zero.h"

int print_hexadecimal(va_list *valist, int *index, int uppercase, int *pc);

#endif
