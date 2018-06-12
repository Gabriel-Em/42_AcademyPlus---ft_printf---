/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:30:40 by gpop              #+#    #+#             */
/*   Updated: 2018/05/28 15:30:55 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include "console.h"
# include <stdarg.h>
# include "ft_printf_objects.h"
# include "specifier.h"
# include "flags.h"
# include "width.h"
# include "precision.h"
# include "printf_length.h"

int ft_printf(const char *format, ...);

#endif
