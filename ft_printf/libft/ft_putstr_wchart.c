/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_wchart.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 15:41:31 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 00:45:49 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_wchart(wchar_t *str, int width, int left_aligned)
{
	int	i;
	int	len;
	int pc;

	i = 0;
	len = (int)ft_strlen_wchart(str);
	if (!left_aligned)
		while (i++ < width - len)
			ft_putchar(' ');
	pc = i == 1 ? 0 : i - 1;
	i = 0;
	while (str[i])
		ft_putwchart(str[i++]);
	if (left_aligned)
		while (i < width)
		{
			ft_putchar(' ');
			i++;
		}
	return (pc + i);
}
