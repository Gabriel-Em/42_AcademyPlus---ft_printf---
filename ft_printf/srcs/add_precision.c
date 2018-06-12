/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_precision.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 15:42:47 by gpop              #+#    #+#             */
/*   Updated: 2018/06/02 18:38:23 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add_precision.h"

char	*add_precision_without_prefix(char **digits)
{
	char	*new_digits;
	int		i;
	int		len;
	int		j;

	len = (int)ft_strlen(*digits);
	if (PRECISION <= len)
		return (*digits);
	new_digits = ft_strnew((size_t)PRECISION);
	i = 0;
	while (i < PRECISION - len)
		new_digits[i++] = '0';
	j = 0;
	while ((*digits)[j])
		new_digits[i++] = (*digits)[j++];
	free(*digits);
	return (new_digits);
}

char	*add_precision(char **digits)
{
	size_t	len;
	char	*new_digits;
	int		i;
	int		j;

	if (ft_strlen(*digits) == 1 && (*digits)[0] == '0')
		return (add_precision_without_prefix(digits));
	if (PRECISION <= (int)ft_strlen(*digits) - HAS_SIGN((*digits)[0]))
		return (*digits);
	len = ft_strlen(*digits) - HAS_SIGN((*digits)[0]);
	new_digits = ft_strnew((size_t)ft_max((int)len, PRECISION)
	+ HAS_SIGN((*digits)[0]));
	i = 0;
	if (HAS_SIGN((*digits)[0]))
		new_digits[i++] = (*digits)[0];
	while (i < PRECISION - (int)len + HAS_SIGN((*digits)[0]))
		new_digits[i++] = '0';
	j = HAS_SIGN((*digits)[0]);
	while ((*digits)[j])
		new_digits[i++] = (*digits)[j++];
	free(*digits);
	return (new_digits);
}

char	*add_precision_hex(char **digits)
{
	size_t	len;
	char	*new_digits;
	int		i;
	int		j;

	if ((ft_strlen(*digits) == 1 && (*digits)[0] == '0')
		|| (ft_strlen(*digits) >= 2 && !HAS_HEX_PREFIX(*digits)))
		return (add_precision_without_prefix(digits));
	if (PRECISION <= (int)ft_strlen(*digits) - 2)
		return (*digits);
	len = ft_strlen(*digits) - 2;
	new_digits = ft_strnew((size_t)(PRECISION + 2));
	new_digits[0] = (*digits)[0];
	new_digits[1] = (*digits)[1];
	i = 2;
	while (i < PRECISION - (int)len + 2)
		new_digits[i++] = '0';
	j = 2;
	while ((*digits)[j])
		new_digits[i++] = (*digits)[j++];
	free(*digits);
	return (new_digits);
}
