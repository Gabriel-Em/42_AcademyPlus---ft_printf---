/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 22:12:36 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 14:49:42 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_number_of_digits(unsigned long long int n)
{
	int count;

	count = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char		*ft_itoa_u(unsigned long long int n, int with_plus)
{
	char	*str;
	int		no_of_digits;
	int		k;

	no_of_digits = get_number_of_digits(n);
	str = ft_strnew((size_t)no_of_digits + (size_t)with_plus);
	if (str == NULL)
		return (NULL);
	if (with_plus)
		str[0] = '+';
	k = no_of_digits + with_plus - 1;
	while (k >= with_plus)
	{
		str[k--] = (char)(n % 10 + '0');
		n /= 10;
	}
	return (str);
}
