/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 18:19:35 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 00:00:29 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPECIFIER_H
# define SPECIFIER_H

# include <stdarg.h>
# include "ft_printf_objects.h"
# include "print_string.h"
# include "print_pointer.h"
# include "print_decimal.h"
# include "print_octal.h"
# include "print_unsigned_decimal.h"
# include "print_hexadecimal.h"
# include "print_character.h"
# include "print_modulo.h"
# include "print_binary.h"

int	treat_specifiers(const char *format, int *index, va_list *valist, int *pc);

#endif
