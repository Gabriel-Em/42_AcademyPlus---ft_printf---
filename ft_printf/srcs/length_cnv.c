/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_cnv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:37:45 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 14:06:39 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "length_cnv.h"

LLINT	get_int_value(va_list *valist)
{
	if (LENGTH_L)
		return ((LLINT)va_arg(*valist, long int));
	if (LENGTH_HH)
		return ((LLINT)((signed char)va_arg(*valist, int)));
	if (LENGTH_H)
		return ((LLINT)((short int)va_arg(*valist, int)));
	if (LENGTH_LL)
		return (va_arg(*valist, LLINT));
	if (LENGTH_J)
		return ((LLINT)va_arg(*valist, intmax_t));
	if (LENGTH_Z)
		return ((LLINT)va_arg(*valist, size_t));
	return ((LLINT)va_arg(*valist, int));
}

ULLINT	get_uint_value(va_list *valist)
{
	if (LENGTH_L)
		return ((ULLINT)va_arg(*valist, unsigned long int));
	if (LENGTH_HH)
		return ((ULLINT)((unsigned char)va_arg(*valist, int)));
	if (LENGTH_H)
		return ((ULLINT)((unsigned short int)va_arg(*valist, int)));
	if (LENGTH_LL)
		return (va_arg(*valist, ULLINT));
	if (LENGTH_J)
		return ((ULLINT)va_arg(*valist, uintmax_t));
	if (LENGTH_Z)
		return ((ULLINT)va_arg(*valist, size_t));
	return ((ULLINT)va_arg(*valist, unsigned int));
}
