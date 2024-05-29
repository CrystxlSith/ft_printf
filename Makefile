# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/29 15:13:11 by jopfeiff          #+#    #+#              #
#    Updated: 2024/05/29 15:39:00 by jopfeiff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c \
	ft_printf_utils.c \

OBJS = ${SRCS:.c=.o}
SRCDIR = src/
INCLUDE = include
OBJ_DIR = obj/
NAME = libftprintf.a
LIBFT = libft
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

${NAME}: ${OBJS}
	@make ${LIBFT}
	@cp libft/libft.a
	@mv libft.a ${NAME}
	${LIBC} ${NAME} ${OBJS}
	@echo "${LIBFT} compilation done!!"

all: ${NAME}
	


clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} 

re: fclean all

.PHONY : all bonus clean fclean re :
