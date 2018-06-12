/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_octal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:07:06 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 14:38:51 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_octal.h"

static void	print_octal_flags(char *digits, int *pc)
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

int			print_octal(va_list *valist, int *index, int *pc)
{
	char	*digits;

	digits = ft_itobase(get_uint_value(valist), 8, FALSE);
	if (FLAG_HASH)
		add_prefix(&digits, 8, LOWERCASE, FALSE);
	if (HAS_PRECISION)
		digits = add_precision(&digits);
	else if (PRECISION == UNDEFINEDPRECISION)
		if (ft_strlen(digits) == 1 && digits[0] == '0' && !FLAG_HASH)
			digits[0] = '\0';
	if (!FLAGS_EXIST)
		(*pc) += ft_putstr_w(digits, ft_max(WIDTH, (int)ft_strlen(digits)),
				FALSE);
	else
		print_octal_flags(digits, pc);
	(*index)++;
	ft_strdel(&digits);
	return (SUCCESS);
}
