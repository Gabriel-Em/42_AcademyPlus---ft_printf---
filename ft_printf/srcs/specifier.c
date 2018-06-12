/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:00:29 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 00:04:33 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "specifier.h"

static int	treat_numeric_specifiers(const char *format, int *index,
		va_list *valist, int *pc)
{
	if (format[*index] == 'p')
		return (print_pointer(valist, index, pc));
	if (format[*index] == 'd' || format[*index] == 'D' || format[*index] == 'i')
		return (print_decimal(valist, index, pc));
	if (format[*index] == 'o' || format[*index] == 'O')
		return (print_octal(valist, index, pc));
	if (format[*index] == 'u' || format[*index] == 'U')
		return (print_unsigned_decimal(valist, index, pc));
	if (format[*index] == 'x' || format[*index] == 'X')
	{
		if (format[*index] == 'X')
			return (print_hexadecimal(valist, index, UPPERCASE, pc));
		else
			return (print_hexadecimal(valist, index, LOWERCASE, pc));
	}
	if (format[*index] == 'b')
		return (print_binary(valist, index, pc));
	return (FAILURE);
}

static int	treat_string_specifiers(const char *format, int *index,
		va_list *valist, int *pc)
{
	if (format[*index] == 's' || format[*index] == 'S')
		return (print_string(valist, index, pc));
	if (format[*index] == 'c' || format[*index] == 'C')
		return (print_character(valist, index, pc));
	if (format[*index] == '%')
		return (print_modulo(index, pc));
	return (FAILURE);
}

int			treat_specifiers(const char *format, int *index, va_list *valist,
		int *pc)
{
	int result;

	if (format[*index] == 'S' || format[*index] == 'D' | format[*index] == 'O'
			|| format[*index] == 'U' || format[*index] == 'C')
		LENGTH_L = TRUE;
	result = treat_numeric_specifiers(format, index, valist, pc);
	if (result != FAILURE)
		return (result);
	return (treat_string_specifiers(format, index, valist, pc));
}
