/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_decimal.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:18:38 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 14:47:33 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_unsigned_decimal.h"

void	print_unsigned_decimal_flags(char *digits, int *pc)
{
	int left_aligned;

	if (FLAG_MINUS)
		left_aligned = TRUE;
	else
		left_aligned = FALSE;
	if (HAS_PRECISION || FLAG_MINUS)
		FLAG_ZERO = FALSE;
	if (FLAG_ZERO)
		(*pc) += ft_putstr_w_zero(digits, ft_max(WIDTH, (int)ft_strlen(digits)),
	TRUE);
	else
		(*pc) += ft_putstr_w(digits, ft_max(WIDTH, (int)ft_strlen(digits)),
	left_aligned);
}

int		print_unsigned_decimal(va_list *valist, int *index, int *pc)
{
	char	*digits;

	digits = ft_itoa_u(get_uint_value(valist), FALSE);
	if (HAS_PRECISION)
		digits = add_precision(&digits);
	if (!FLAGS_EXIST)
		(*pc) += ft_putstr_w(digits, ft_max(WIDTH, (int)ft_strlen(digits)),
				FALSE);
	else
		print_unsigned_decimal_flags(digits, pc);
	(*index)++;
	ft_strdel(&digits);
	return (SUCCESS);
}
