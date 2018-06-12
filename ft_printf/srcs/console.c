/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   console.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 17:32:43 by gpop              #+#    #+#             */
/*   Updated: 2018/06/02 23:58:04 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "console.h"

void	print_till_next_format(const char *format, int *index, int *pc)
{
	int stop;

	stop = FALSE;
	while (format[*index] && !stop)
	{
		if (format[*index] != '%')
		{
			ft_putchar(format[(*index)++]);
			(*pc)++;
		}
		else
		{
			stop = TRUE;
			(*index)++;
		}
	}
}
