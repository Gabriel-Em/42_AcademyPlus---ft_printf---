/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:30:25 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 01:42:23 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	traverse_format(const char *format, int *i, va_list *valist,
		int *pc)
{
	while (format[*i] && treat_flags(format, i) == SUCCESS)
		;
	treat_width(format, i);
	treat_precision(format, i);
	while (format[*i] && treat_length(format, i) == SUCCESS)
		;
	return (treat_specifiers(format, i, valist, pc));
}

static void	reset_format_elements(void)
{
	reset_flags();
	reset_width();
	reset_precision();
	reset_length();
}

static int	process_format(const char *format, int *pc, va_list *valist)
{
	int result;
	int	index;

	index = 0;
	reset_format_elements();
	while (format[index])
	{
		print_till_next_format(format, &index, pc);
		if (!format[index])
			return (SUCCESS);
		result = traverse_format(format, &index, valist, pc);
		while (format[index] && result == FAILURE)
			result = traverse_format(format, &index, valist, pc);
		reset_format_elements();
	}
	return (result);
}

int			ft_printf(const char *format, ...)
{
	va_list	valist;
	int		result;
	int		printed_chars;

	printed_chars = 0;
	va_start(valist, format);
	result = process_format(format, &printed_chars, &valist);
	va_end(valist);
	if (result == SUCCESS)
		return (printed_chars);
	else
		return (ERROR);
}
