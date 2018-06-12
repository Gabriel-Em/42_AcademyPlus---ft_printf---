/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 22:12:36 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 14:43:27 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_number_of_digits(long long int n)
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

static void	add_sign(int sign, long long int n, char *str)
{
	if (sign)
	{
		if (n < 0)
			str[0] = '-';
		else
			str[0] = '+';
	}
}

char		*ft_itoa(long long int n, int with_plus)
{
	char	*str;
	int		sign;
	int		no_of_digits;
	int		k;

	sign = 0;
	if (n < 0 || with_plus)
		sign = 1;
	no_of_digits = get_number_of_digits(n);
	str = ft_strnew((size_t)no_of_digits + (size_t)sign);
	if (str == NULL)
		return (NULL);
	add_sign(sign, n, str);
	k = no_of_digits + sign - 1;
	while (k >= sign)
	{
		if (n < 0)
			str[k--] = (char)((n % 10 * -1) + '0');
		else
			str[k--] = (char)(n % 10 + '0');
		n /= 10;
	}
	return (str);
}
