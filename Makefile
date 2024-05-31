# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crystal <crystal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/29 15:13:11 by jopfeiff          #+#    #+#              #
#    Updated: 2024/05/31 14:24:51 by crystal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_printf.c srcs/ft_printf_utils.c srcs/ft_print_hex.c srcs/ft_print_nb.c srcs/ft_print_unsigned.c srcs/ft_print_str.c srcs/ft_print_char.c srcs/ft_print_ptr.c
CC = cc
CFLAGS = -Wall -Wextra -Werror -I./includes/
RM = rm -rf
NAME = libftprintf.a
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)
clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)
fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re

.SILENT:


