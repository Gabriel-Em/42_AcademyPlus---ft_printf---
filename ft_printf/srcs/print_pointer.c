/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:13:54 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 00:23:47 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_pointer.h"

int	print_pointer(va_list *valist, int *index, int *pc)
{
	void	*p;
	char	*digits;

	p = va_arg(*valist, void *);
	digits = ft_itobase((unsigned long)p, 16, LOWERCASE);
	add_prefix(&digits, 16, LOWERCASE, TRUE);
	if (HAS_PRECISION)
		digits = add_precision_hex(&digits);
	if (FLAG_MINUS || PRECISION)
		FLAG_ZERO = FALSE;
	if (FLAG_ZERO)
		(*pc) += ft_putstr_w_zero(digits, ft_max(g_width,
					(int)ft_strlen(digits)), TRUE);
	else if (FLAG_MINUS)
		(*pc) += ft_putstr_w(digits, ft_max(WIDTH, (int)ft_strlen(digits)),
				TRUE);
	else
		(*pc) += ft_putstr_w(digits, ft_max(WIDTH, (int)ft_strlen(digits)),
				FALSE);
	ft_strdel(&digits);
	(*index)++;
	return (SUCCESS);
}
