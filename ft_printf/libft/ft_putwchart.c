/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchart.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 15:55:11 by gpop              #+#    #+#             */
/*   Updated: 2018/06/08 18:34:53 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	apply_second_mask(char *wchar_str, wchar_t c)
{
	wchar_str[0] = (unsigned char)((c >> 6) | 0xC0);
	wchar_str[1] = (unsigned char)((c & 0x3F) | 0x80);
}

static void	apply_third_mask(char *wchar_str, wchar_t c)
{
	wchar_str[0] = (unsigned char)(((c >> 12)) | 0xE0);
	wchar_str[1] = (unsigned char)(((c >> 6) & 0x3F) | 0x80);
	wchar_str[2] = (unsigned char)((c & 0x3F) | 0x80);
}

static void	apply_fourth_mask(char *wchar_str, wchar_t c)
{
	wchar_str[0] = (unsigned char)(((c >> 18)) | 0xF0);
	wchar_str[1] = (unsigned char)(((c >> 12) & 0x3F) | 0x80);
	wchar_str[2] = (unsigned char)(((c >> 6) & 0x3F) | 0x80);
	wchar_str[3] = (unsigned char)((c & 0x3F) | 0x80);
}

void		ft_putwchart(wchar_t c)
{
	char *wchar_str;

	wchar_str = ft_strnew(4);
	if (c < (1 << 7))
		wchar_str[0] = (unsigned char)(c);
	else if (c < (1 << 11))
		apply_second_mask(wchar_str, c);
	else if (c < (1 << 16))
		apply_third_mask(wchar_str, c);
	else if (c < (1 << 21))
		apply_fourth_mask(wchar_str, c);
	ft_putstr(wchar_str);
	ft_strdel(&wchar_str);
}
