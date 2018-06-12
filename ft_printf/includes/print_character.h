/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_character.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 17:25:13 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 00:05:33 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_CHARACTER_H
# define PRINT_CHARACTER_H

# include <stdarg.h>
# include "length_cnv.h"
# include "ft_printf_objects.h"
# include "ft_putstr_zero.h"

int print_character(va_list *valist, int *index, int *pc);

#endif
