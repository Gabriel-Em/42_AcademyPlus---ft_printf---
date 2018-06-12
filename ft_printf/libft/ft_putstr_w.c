/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_w.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 16:56:35 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 00:42:41 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_w(char *str, int width, int left_aligned)
{
	int i;
	int len;
	int pc;

	i = 0;
	len = (int)ft_strlen(str);
	if (!left_aligned)
		while (i < width - len)
		{
			ft_putchar(' ');
			i++;
		}
	pc = i;
	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	if (left_aligned)
		while (i < width)
		{
			ft_putchar(' ');
			i++;
		}
	return (pc + i);
}
