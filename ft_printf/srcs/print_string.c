/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:15:13 by gpop              #+#    #+#             */
/*   Updated: 2018/06/08 18:54:31 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_string.h"

static wchar_t	*cut_string_w(wchar_t *str)
{
	wchar_t	*new_str;
	int		i;

	i = 0;
	new_str = (wchar_t*)malloc(sizeof(wchar_t) * PRECISION + 1);
	new_str[PRECISION] = L'\0';
	while (i < PRECISION)
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}

static char		*cut_string(char *str)
{
	char	*new_str;
	int		i;

	i = 0;
	new_str = ft_strnew(PRECISION);
	while (i < PRECISION)
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}

static void		get_string(va_list *valist, char **s, wchar_t **s_w)
{
	if (LENGTH_L)
	{
		*s_w = va_arg(*valist, wchar_t*);
		if (*s_w == NULL)
		{
			*s_w = WNULLSTRING;
			return ;
		}
		if (HAS_PRECISION && PRECISION < (int)ft_strlen_wchart(*s_w))
			*s_w = cut_string_w(*s_w);
	}
	else
	{
		*s = va_arg(*valist, char*);
		if (*s == NULL)
		{
			*s = NULLSTRING;
			return ;
		}
		if (HAS_PRECISION && PRECISION < (int)ft_strlen(*s))
			*s = cut_string(*s);
	}
}

void			print_string_flags(int *pc, char *s, wchar_t *s_w,
int left_aligned)
{
	if (LENGTH_L)
		if (FLAG_ZERO)
			(*pc) += ft_putstr_wchart_zero(s_w,
			ft_max((int)ft_strlen_wchart(s_w), WIDTH));
		else
			(*pc) += ft_putstr_wchart(s_w, ft_max((int)ft_strlen_wchart(s_w),
			WIDTH), left_aligned);
	else if (FLAG_ZERO)
		(*pc) += ft_putstr_w_zero(s, ft_max((int)ft_strlen(s), WIDTH), FALSE);
	else
		(*pc) += ft_putstr_w(s, ft_max((int)ft_strlen(s), WIDTH), left_aligned);
}

int				print_string(va_list *valist, int *index, int *pc)
{
	char	*s;
	wchar_t	*s_w;
	int		left_aligned;

	(*index)++;
	s = NULL;
	s_w = NULL;
	get_string(valist, &s, &s_w);
	if (FLAG_MINUS)
	{
		left_aligned = TRUE;
		FLAG_ZERO = FALSE;
	}
	else
		left_aligned = FALSE;
	print_string_flags(pc, s, s_w, left_aligned);
	return (SUCCESS);
}
