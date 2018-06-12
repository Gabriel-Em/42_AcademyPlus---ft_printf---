/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 17:31:55 by gpop              #+#    #+#             */
/*   Updated: 2018/06/02 17:32:23 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"

void	reset_flags(void)
{
	int i;

	i = 0;
	while (i < FLAGSIZE)
		FLAGS[i++] = FALSE;
}

int		treat_flags(const char *format, int *index)
{
	while (!IS_FORMAT_ELEMENT(format[*index]))
		(*index)++;
	if (format[*index] == '-' || format[*index] == '+' || format[*index] == ' '
			|| format[*index] == '#' ||
			format[*index] == '0')
	{
		if (format[*index] == '-')
			FLAG_MINUS = TRUE;
		if (format[*index] == '+')
			FLAG_PLUS = TRUE;
		if (format[*index] == ' ')
			FLAG_SPACE = TRUE;
		if (format[*index] == '#')
			FLAG_HASH = TRUE;
		if (format[*index] == '0')
			FLAG_ZERO = TRUE;
		(*index)++;
		return (SUCCESS);
	}
	return (FAILURE);
}
