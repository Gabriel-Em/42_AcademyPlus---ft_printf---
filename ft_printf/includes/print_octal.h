/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_octal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 15:40:49 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 00:02:39 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_OCTAL_H
# define PRINT_OCTAL_H

# include "libft.h"
# include <stdarg.h>
# include "ft_printf_objects.h"
# include "prefix.h"
# include "add_precision.h"
# include "length_cnv.h"
# include "ft_putstr_zero.h"

int	print_octal(va_list *valist, int *index, int *pc);

#endif
