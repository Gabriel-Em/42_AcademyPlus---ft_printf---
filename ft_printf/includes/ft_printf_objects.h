/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_objects.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:53:58 by gpop              #+#    #+#             */
/*   Updated: 2018/06/03 14:17:05 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_OBJECTS_H
# define FT_PRINTF_OBJECTS_H

# define BYTE unsigned char
# define BOOL unsigned char

# define SUCCESS				0
# define FAILURE				2

# define TRUE					1
# define FALSE					0

# define UPPERCASE				TRUE
# define LOWERCASE				FALSE

# define FLAGSIZE				5
# define LENGTHSIZE				6

# define NOPRECISION			-19
# define UNDEFINEDPRECISION		-99
# define ERROR					-23

BYTE							g_flags[FLAGSIZE];
int								g_width;
int								g_precision;
BYTE							g_length[LENGTHSIZE];

# define HAS_PRECISION			PRECISION > 0
# define FLAG_MINUS				g_flags[0]
# define FLAG_PLUS				g_flags[1]
# define FLAG_SPACE				g_flags[2]
# define FLAG_HASH				g_flags[3]
# define FLAG_ZERO				g_flags[4]

# define WIDTH					g_width
# define PRECISION				g_precision

# define LENGTH_HH				g_length[0]
# define LENGTH_H				g_length[1]
# define LENGTH_L				g_length[2]
# define LENGTH_LL				g_length[3]
# define LENGTH_J				g_length[4]
# define LENGTH_Z				g_length[5]

# define FLAGS					g_flags
# define LENGTH					g_length

# define FM FLAG_MINUS
# define FP FLAG_PLUS
# define FS FLAG_SPACE
# define FH FLAG_SPACE
# define FZ FLAG_ZERO
# define FLAGS_EXIST (FM || FP || FS || FH || FZ)

# define IS_FLAG_FM_FH_FZ(X) ((X) == '-' || (X) == '#' || (X) == '0')
# define IS_FLAG_FP_FS(X) ((X) == '+' || (X) == ' ')
# define IS_FLAG(X) IS_FLAG_FM_FH_FZ(X) || IS_FLAG_FP_FS(X)

# define IS_WIDTH(X) (ft_atoi(&(X)) != 0)
# define IS_PRECISION(X) ((X) == '.')
# define IS_LENGTH(X) ((X) == 'h' || (X) == 'l' || (X) == 'z' || (X) == 'j')

# define IS_SPECIFIER_S(X) ((X) == 's' || (X) == 'S')
# define IS_SPECIFIER_D(X) ((X) == 'd' || (X) == 'D' || (X) == 'i')
# define IS_SPECIFIER_P(X) ((X) == 'p')
# define IS_SPECIFIER_U(X) ((X) == 'u' || (X) == 'U')
# define IS_SPECIFIER_O(X) ((X) == 'o' || (X) == 'O')
# define IS_SPECIFIER_X(X) ((X) == 'x' || (X) == 'X')
# define IS_SPECIFIER_C(X) ((X) == 'c' || (X) == 'C')
# define IS_SPECIFIER_B(X) ((X) == 'b')
# define IS_SPECIFIER_M(X) ((X) == '%')

# define IS_SD(X) IS_SPECIFIER_S(X) || IS_SPECIFIER_D(X)
# define IS_PXB(X) IS_SPECIFIER_P(X) || IS_SPECIFIER_X(X) || IS_SPECIFIER_B(X)
# define IS_UO(X) IS_SPECIFIER_U(X) || IS_SPECIFIER_O(X)
# define IS_CM(X) IS_SPECIFIER_C(X) || IS_SPECIFIER_M(X)

# define IS_SPECIFIER(X) IS_SD(X) || IS_PXB(X) || IS_UO(X) || IS_CM(X)

# define IS_F(X) IS_FLAG(X)
# define IS_L(X) IS_LENGTH(X)
# define IS_W(X) IS_WIDTH(X)
# define IS_P(X) IS_PRECISION(X)
# define IS_S(X) IS_SPECIFIER(X)

# define IS_FL(X) IS_F(X) || IS_L(X)
# define IS_WP(X) IS_W(X) || IS_P(X)
# define IS_FORMAT_ELEMENT(X) (IS_FL(X) || IS_WP(X) || IS_S(X))

#endif
