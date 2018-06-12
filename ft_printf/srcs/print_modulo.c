/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_modulo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:47:19 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 00:23:10 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_modulo.h"

int	print_modulo(int *index, int *pc)
{
	int		c;
	BOOL	left_aligned;

	c = '%';
	if (FLAG_MINUS)
	{
		left_aligned = TRUE;
		FLAG_ZERO = FALSE;
	}
	else
		left_aligned = FALSE;
	if (FLAG_ZERO)
		(*pc) += ft_putchar_w_zero(c, ft_max(WIDTH, 1));
	else
		(*pc) += ft_putchar_w(c, ft_max(WIDTH, 1), left_aligned);
	(*index)++;
	return (SUCCESS);
}
