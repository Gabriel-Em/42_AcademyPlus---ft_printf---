/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_length.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 18:20:25 by gpop              #+#    #+#             */
/*   Updated: 2018/06/02 18:20:34 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_LENGTH_H
# define PRINTF_LENGTH_H

# include "libft.h"
# include "ft_printf_objects.h"

void	reset_length();
int		treat_length(const char *format, int *index);

#endif
