/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 18:12:21 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 14:17:48 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_decimal.h"

static void	print_decimal_flags(char *digits, int *pc)
{
	int left_aligned;

	if (FLAG_MINUS)
		left_aligned = TRUE;
	else
		left_aligned = FALSE;
	if (HAS_PRECISION || FLAG_MINUS)
		FLAG_ZERO = FALSE;
	if (FLAG_SPACE && WIDTH <= (int)ft_strlen(digits) && !FLAG_PLUS &&
			digits[0] != '-' && digits[0] != '+')
	{
		ft_putchar(' ');
		(*pc)++;
	}
	if (FLAG_ZERO)
		(*pc) += ft_putstr_w_zero(digits, ft_max(WIDTH, (int)ft_strlen(digits)),
				TRUE);
	else
		(*pc) += ft_putstr_w(digits, ft_max(WIDTH, (int)ft_strlen(digits)),
				left_aligned);
}

int			print_decimal(va_list *valist, int *index, int *pc)
{
	char	*digits;

	if (FLAG_PLUS)
		digits = ft_itoa(get_int_value(valist), TRUE);
	else
		digits = ft_itoa(get_int_value(valist), FALSE);
	if (HAS_PRECISION)
		digits = add_precision(&digits);
	else if (PRECISION == UNDEFINEDPRECISION)
		if (ft_strlen(digits) == 1 && digits[0] == '0')
			digits[0] = '\0';
	if (!FLAGS_EXIST)
		(*pc) += ft_putstr_w(digits, ft_max(WIDTH, (int)ft_strlen(digits)),
				FALSE);
	else
		print_decimal_flags(digits, pc);
	(*index)++;
	ft_strdel(&digits);
	return (SUCCESS);
}
