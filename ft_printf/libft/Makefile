# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpop <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/25 02:05:19 by gpop              #+#    #+#              #
#    Updated: 2018/06/08 18:24:20 by gpop             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_DIR = .
INC_DIR = .

FILES = ft_atoi \
			ft_bzero \
			ft_intlen \
			ft_itoa \
			ft_itoa_u \
			ft_itobase \
			ft_isdigit \
			ft_max \
			ft_memdel \
			ft_putchar_w \
			ft_putwchart_w \
			ft_putchar \
			ft_putstr_w \
			ft_putstr_wchart \
			ft_strcat \
			ft_strcpy \
			ft_strdel \
			ft_putwchart \
			ft_strlen \
			ft_strnew \
			ft_strlen_wchart \
			ft_putstr
OBJ = $(patsubst %,%.o,$(FILES))
SRC = $(patsubst %,$(SRC_DIR)/%.c,$(FILES))
CFLAGS = -Wall -Wextra -Werror
CC = gcc

.PHONY: all clean fclean re

all: $(NAME)
	@true	

$(NAME):
	$(CC) -I $(INC_DIR) $(CFLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
