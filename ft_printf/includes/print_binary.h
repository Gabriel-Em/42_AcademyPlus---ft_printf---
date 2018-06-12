/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_binary.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 22:10:44 by gpop              #+#    #+#             */
/*   Updated: 2018/06/08 22:10:46 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_BINARY_H
# define PRINT_BINARY_H

# include <stdarg.h>
# include "ft_printf_objects.h"
# include "libft.h"
# include "add_precision.h"
# include "length_cnv.h"
# include "ft_putstr_zero.h"

int print_binary(va_list *valist, int *index, int *pc);

#endif
