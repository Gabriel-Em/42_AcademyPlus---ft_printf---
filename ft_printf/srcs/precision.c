/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 18:18:36 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 14:31:27 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "precision.h"

void	reset_precision(void)
{
	PRECISION = NOPRECISION;
}

void	treat_precision(const char *format, int *index)
{
	int precision;

	if (!(format[*index]))
		return ;
	while (!IS_FORMAT_ELEMENT(format[*index]))
		(*index)++;
	if (format[*index] == '.')
	{
		(*index)++;
		precision = ft_atoi(format + *index);
		if (precision != 0)
		{
			PRECISION = precision;
			(*index) += ft_intlen(precision);
		}
		else
			PRECISION = UNDEFINEDPRECISION;
		while (ft_isdigit(format[*index]))
			(*index)++;
	}
}
