/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_cnv.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:05:36 by gpop              #+#    #+#             */
/*   Updated: 2018/06/02 16:46:15 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_LENGTH_CNV_H
# define PRINTF_LENGTH_CNV_H

# include <stdarg.h>
# include <wchar.h>
# include <stdint.h>
# include "ft_printf_objects.h"

# define ULLINT unsigned long long int
# define LLINT long long int

LLINT	get_int_value(va_list *valist);
ULLINT	get_uint_value(va_list *valist);

#endif
