/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:12:35 by gpop              #+#    #+#             */
/*   Updated: 2018/06/02 16:12:45 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGS_H
# define FLAGS_H

# include "ft_printf_objects.h"
# include "libft.h"

void	reset_flags();
int		treat_flags(const char *format, int *index);

#endif
