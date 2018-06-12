# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpop <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/25 02:05:19 by gpop              #+#    #+#              #
#    Updated: 2018/06/03 14:48:10 by gpop             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC_DIR = ./srcs
INC_DIR = ./includes
LIB_DIR = ./libft
LIB_INC = ./libft
LIB_LINK = -L $(LIB_DIR) -lft

FUNCTIONS = add_precision \
			console \
			flags \
			ft_printf \
			ft_putstr_zero \
			length_cnv \
			precision \
			prefix \
			print_character \
			print_decimal \
			print_hexadecimal \
			print_modulo \
			print_octal \
			print_pointer \
			print_string \
			print_unsigned_decimal \
			print_binary \
			printf_length \
			specifier \
			width
OBJ = $(patsubst %,%.o,$(FUNCTIONS))
SRC = $(patsubst %,$(SRC_DIR)/%.c,$(FUNCTIONS))
CFLAGS = -Wall -Wextra -Werror
CC = gcc

.PHONY: all clean fclean re

all: $(NAME)
	@true	

$(NAME):
	@make -C $(LIB_DIR)
	cp $(LIB_DIR)/libft.a ./$(NAME)
	$(CC) -I $(INC_DIR) -I $(LIB_DIR) $(CFLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	@make -C $(LIB_DIR) clean
	@rm -f $(OBJ)

fclean: clean
	@make -C $(LIB_DIR) fclean
	@rm -f $(NAME)

re: fclean all
