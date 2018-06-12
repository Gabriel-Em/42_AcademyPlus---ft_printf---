/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:48:49 by gpop              #+#    #+#             */
/*   Updated: 2018/06/02 22:11:01 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prefix.h"

void	add_prefix(char **digits, int base, int uppercase, int is_pointer)
{
	char *new_digits;

	if (!is_pointer && ft_strlen(*digits) == 1 && (*digits)[0] == '0')
		return ;
	if (base == 16)
	{
		new_digits = ft_strnew(ft_strlen(*digits) + 2);
		if (uppercase)
			ft_strcpy(new_digits, "0X");
		else
			ft_strcpy(new_digits, "0x");
	}
	else
	{
		new_digits = ft_strnew(ft_strlen(*digits) + 1);
		new_digits[0] = '0';
	}
	ft_strcat(new_digits, *digits);
	ft_memdel((void**)digits);
	*digits = new_digits;
}
