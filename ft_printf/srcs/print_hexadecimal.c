/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 17:26:44 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 14:32:56 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_hexadecimal.h"

static void	print_hexadecimal_flags(char *digits, int *pc)
{
	int	left_aligned;

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

int			print_hexadecimal(va_list *valist, int *index, int uppercase,
		int *pc)
{
	char	*digits;

	digits = ft_itobase(get_uint_value(valist), 16, uppercase);
	if (FLAG_HASH)
		add_prefix(&digits, 16, uppercase, FALSE);
	if (HAS_PRECISION)
		digits = add_precision_hex(&digits);
	else if (PRECISION == UNDEFINEDPRECISION)
		if (ft_strlen(digits) == 1 && digits[0] == '0')
			digits[0] = '\0';
	if (!FLAGS_EXIST)
		(*pc) += ft_putstr_w(digits, ft_max(WIDTH, (int)ft_strlen(digits)),
				FALSE);
	else
		print_hexadecimal_flags(digits, pc);
	(*index)++;
	ft_strdel(&digits);
	return (SUCCESS);
}
