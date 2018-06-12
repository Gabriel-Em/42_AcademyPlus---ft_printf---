/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_w.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:04:35 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 00:46:58 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_w(int c, int width, int left_aligned)
{
	int i;

	i = 0;
	if (!left_aligned)
		while (i < width - 1)
		{
			ft_putchar(' ');
			i++;
		}
	ft_putchar(c);
	if (left_aligned)
		while (i < width - 1)
		{
			ft_putchar(' ');
			i++;
		}
	return (i + 1);
}
