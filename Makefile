# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/29 15:13:11 by jopfeiff          #+#    #+#              #
#    Updated: 2024/05/30 14:14:49 by jopfeiff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c \
	ft_printf_utils.c \
	ft_print_hex.c \
	ft_print_nb.c \
	ft_print_unsigned.c \
	ft_print_str.c \
	ft_print_char.c \
	ft_print_ptr.c

# Définir les variables
LIBNAME = libft.a
RM = rm -f
CC = cc
LIBC = ar rcs
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a
LIBDIR = ./libft

# Règle par défaut
all: $(NAME)

# libft make
mylibft:
	@make -C $(LIBDIR)
	@cp $(LIBDIR)/$(LIBNAME) .
	@mv $(LIBNAME) $(NAME)

# Règle pour créer la bibliothèque
$(NAME): mylibft $(OBJS)
	${LIBC} $(NAME) $(OBJS)

# Règle de nettoyage
clean:
	${RM} $(OBJS)
	@cd ${LIBDIR} && make clean

main: main.c ${NAME}
	${CC} ${CFLAGS} -o main main.c -L. -lftprintf

fclean: clean
	${RM} $(NAME)
	@cd ${LIBDIR} && make fclean

re: fclean all

.PHONY: all clean fclean re

