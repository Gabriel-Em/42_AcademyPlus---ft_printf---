/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_precision.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 18:17:47 by gpop              #+#    #+#             */
/*   Updated: 2018/06/02 18:17:54 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADD_PRECISION_H
# define ADD_PRECISION_H

# include "libft.h"
# include "ft_printf_objects.h"
# include "prefix.h"

# define HAS_SIGN(X) (((X) == '-' || (X) == '+') ? 1 : 0)

char	*add_precision(char **digits);
char	*add_precision_hex(char **digits);

#endif
