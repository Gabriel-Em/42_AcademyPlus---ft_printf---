/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_zero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 17:23:58 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 01:22:57 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr_zero.h"

static int	write_prefix(char *str, int treat_as_number)
{
	int pc;

	pc = 0;
	if (treat_as_number)
	{
		if (ft_strlen(str) >= 2 && (HAS_HEX_PREFIX(str)))
		{
			write(1, str, 2);
			pc += 2;
		}
		if (str[0] == '+' || str[0] == '-')
		{
			ft_putchar(str[0]);
			pc++;
		}
	}
	return (pc);
}

int			ft_putstr_w_zero(char *str, int width, BOOL treat_as_number)
{
	int i;
	int len;
	int pc;

	pc = write_prefix(str, treat_as_number);
	len = (int)ft_strlen(str);
	i = 0;
	while (i++ < width - len)
	{
		ft_putchar('0');
		pc++;
	}
	i = 0;
	if (treat_as_number)
	{
		if (ft_strlen(str) >= 2 && HAS_HEX_PREFIX(str))
			i = 2;
		else if (str[0] == '+' || str[0] == '-')
			i = 1;
	}
	pc -= i;
	while (str[i])
		ft_putchar(str[i++]);
	return (pc + i);
}

int			ft_putstr_wchart_zero(wchar_t *str, int width)
{
	int i;
	int len;
	int pc;

	pc = 0;
	len = (int)ft_strlen_wchart(str);
	i = 0;
	while (i++ < width - len)
		ft_putchar('0');
	pc += i == 1 ? 0 : i - 1;
	i = 0;
	while (str[i])
	{
		ft_putwchart(str[i]);
		i++;
		pc++;
	}
	return (pc);
}

int			ft_putchar_w_zero(int c, int width)
{
	int i;

	i = 0;
	while (i < width - 1)
	{
		ft_putchar('0');
		i++;
	}
	ft_putchar((char)c);
	return (i + 1);
}

int			ft_putchar_wchart_zero(wchar_t c, int width)
{
	int i;

	i = 0;
	while (i < width - 1)
	{
		ft_putchar('0');
		i++;
	}
	ft_putwchart(c);
	return (i + 1);
}
