/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:20:48 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 01:42:35 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "width.h"

void	reset_width(void)
{
	WIDTH = FALSE;
}

void	treat_width(const char *format, int *index)
{
	int width;

	if (!(*format))
		return ;
	while (!IS_FORMAT_ELEMENT(format[*index]))
		(*index)++;
	if (format[*index] == '0')
	{
		(*index)++;
		return ;
	}
	width = ft_atoi(format + *index);
	if (width != 0)
	{
		WIDTH = width;
		(*index) += ft_intlen(WIDTH);
	}
}
