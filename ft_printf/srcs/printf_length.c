/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:22:54 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 01:41:28 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_length.h"

void			reset_length(void)
{
	int i;

	i = 0;
	while (i < LENGTHSIZE)
		LENGTH[i++] = FALSE;
}

static int		treat_h_and_hh(const char *format, int *index)
{
	if (format[*index] == 'h')
	{
		reset_length();
		if (format[(*index) + 1] == 'h')
		{
			LENGTH_HH = TRUE;
			(*index) += 2;
		}
		else
		{
			LENGTH_H = TRUE;
			(*index)++;
		}
		return (SUCCESS);
	}
	return (FAILURE);
}

static int		treat_l_and_ll(const char *format, int *index)
{
	if (format[*index] == 'l')
	{
		reset_length();
		if (format[(*index) + 1] == 'l')
		{
			LENGTH_LL = TRUE;
			(*index) += 2;
		}
		else
		{
			LENGTH_L = TRUE;
			(*index)++;
		}
		return (SUCCESS);
	}
	return (FAILURE);
}

static int		treat_j_and_z(const char *format, int *index)
{
	if (format[*index] == 'j')
	{
		reset_length();
		LENGTH_J = TRUE;
		(*index)++;
		return (SUCCESS);
	}
	if (format[*index] == 'z')
	{
		reset_length();
		LENGTH_Z = TRUE;
		(*index)++;
		return (SUCCESS);
	}
	return (FAILURE);
}

int				treat_length(const char *format, int *index)
{
	int result;

	if (!format[*index])
		return (FAILURE);
	while (!IS_FORMAT_ELEMENT(format[*index]))
		(*index)++;
	result = treat_h_and_hh(format, index);
	if (result != FAILURE)
		return (result);
	result = treat_l_and_ll(format, index);
	if (result != FAILURE)
		return (result);
	return (treat_j_and_z(format, index));
}
