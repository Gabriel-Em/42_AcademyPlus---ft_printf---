/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:13:29 by gpop              #+#    #+#             */
/*   Updated: 2018/06/08 18:47:09 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PREFIX_H
# define PREFIX_H

# include "ft_printf_objects.h"
# include "libft.h"

# define HAS_HEX_PREFIX(X) ((X)[0] == '0' && ((X)[1] == 'x' || (X)[1] == 'X'))

void	add_prefix(char **digits, int base, int uppercase, int is_pointer);

#endif
