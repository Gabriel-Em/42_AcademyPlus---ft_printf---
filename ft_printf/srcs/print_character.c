/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_character.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 17:25:50 by gpop              #+#    #+#             */
/*   Updated: 2018/06/08 18:35:32 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_character.h"

static void	get_character(va_list *valist, int *c, wchar_t *c_w)
{
	if (LENGTH_L)
		*c_w = (wchar_t)va_arg(*valist, wint_t);
	else
		*c = (int)((char)va_arg(*valist, int));
}

int			print_character(va_list *valist, int *index, int *pc)
{
	int			c;
	wchar_t		c_w;
	BOOL		left_aligned;

	get_character(valist, &c, &c_w);
	if (FLAG_MINUS)
	{
		left_aligned = TRUE;
		FLAG_ZERO = FALSE;
	}
	else
		left_aligned = FALSE;
	if (LENGTH_L)
		if (FLAG_ZERO)
			(*pc) += ft_putchar_wchart_zero(c_w, ft_max(WIDTH, 1));
		else
			(*pc) += ft_putwchart_w(c_w, ft_max(WIDTH, 1), left_aligned);
	else if (FLAG_ZERO)
		(*pc) += ft_putchar_w_zero(c, ft_max(WIDTH, 1));
	else
		(*pc) += ft_putchar_w(c, ft_max(WIDTH, 1), left_aligned);
	(*index)++;
	return (SUCCESS);
}
