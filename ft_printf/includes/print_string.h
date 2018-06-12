/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 17:33:11 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 00:05:08 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_STRING_H
# define PRINT_STRING_H

# include <stdarg.h>
# include "ft_printf_objects.h"
# include "ft_putstr_zero.h"

# define NULLSTRING "(null)"
# define WNULLSTRING L"(null)"

int print_string(va_list *valist, int *index, int *pc);

#endif
