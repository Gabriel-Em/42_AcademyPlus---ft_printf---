/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchart_w.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:09:00 by gpop              #+#    #+#             */
/*   Updated: 2018/06/08 16:09:03 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putwchart_w(wchar_t c, int width, int left_aligned)
{
	int i;

	i = 0;
	if (!left_aligned)
		while (i < width - 1)
		{
			ft_putchar(' ');
			i++;
		}
	ft_putwchart(c);
	if (left_aligned)
		while (i < width - 1)
		{
			ft_putchar(' ');
			i++;
		}
	return (i + 1);
}
