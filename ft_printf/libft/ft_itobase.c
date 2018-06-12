/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itobase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 17:00:47 by gpop              #+#    #+#             */
/*   Updated: 2018/06/02 17:00:51 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_uintlen_base(unsigned long long nbr, int base)
{
	int len;

	if (nbr == 0)
		return (1);
	len = 0;
	while (nbr != 0)
	{
		nbr /= base;
		len++;
	}
	return (len);
}

static char	ft_dtoc(int digit, int uppercase)
{
	if (digit >= 0 && digit <= 9)
		return ((char)(digit + '0'));
	else if (uppercase)
		return ((char)(digit + ('A' - 10)));
	else
		return ((char)(digit + ('a' - 10)));
}

char		*ft_itobase(unsigned long long nbr, int base, int uppercase)
{
	int		len;
	char	*digits;
	int		index;

	if (nbr == 0)
	{
		digits = ft_strnew(1);
		digits[0] = '0';
		return (digits);
	}
	len = ft_uintlen_base(nbr, base);
	digits = ft_strnew((size_t)len);
	index = len - 1;
	while (nbr != 0)
	{
		digits[index--] = ft_dtoc((int)(nbr % base), uppercase);
		nbr /= base;
	}
	return (digits);
}
