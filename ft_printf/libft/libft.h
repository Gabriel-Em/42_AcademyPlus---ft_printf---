/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 14:56:31 by gpop              #+#    #+#             */
/*   Updated: 2018/06/08 18:24:06 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <wchar.h>

void				ft_bzero(void *s, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strcat(char *dest, const char *src);
int					ft_atoi(const char *nptr);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
char				*ft_itoa(long long int n, int with_plus);
char				*ft_itoa_u(unsigned long long int n, int with_plus);
void				ft_putchar(char c);
int					ft_max(int nb1, int nb2);
int					ft_intlen(int nb);
int					ft_isdigit(int c);
int					ft_putstr_w(char *str, int width, int left_aligned);
int					ft_putstr_wchart(wchar_t *str, int width, int left_aligned);
int					ft_putchar_w(int c, int width, int left_aligned);
int					ft_putwchart_w(int c, int width, int left_aligned);
void				ft_putwchart(wchar_t c);
int					ft_strlen_wchart(wchar_t *str);
char				*ft_itobase(unsigned long long nbr, int base,
		int uppercase);
void				ft_putstr(char *str);

#endif
