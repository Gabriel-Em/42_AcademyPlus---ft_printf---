/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:21:46 by gpop              #+#    #+#             */
/*   Updated: 2018/06/02 16:22:09 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRECISION_H
# define PRECISION_H

# include "libft.h"
# include "ft_printf_objects.h"

void	reset_precision();
void	treat_precision(const char *format, int *index);

#endif
