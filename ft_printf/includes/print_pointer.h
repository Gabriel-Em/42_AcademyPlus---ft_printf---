/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:46:44 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 00:01:57 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_POINTER_H
# define PRINT_POINTER_H

# include "libft.h"
# include <stdarg.h>
# include "ft_printf_objects.h"
# include "ft_putstr_zero.h"
# include "add_precision.h"

int	print_pointer(va_list *valist, int *index, int *pc);

#endif
