# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 10:52:16 by labdelkh          #+#    #+#              #
#    Updated: 2025/01/21 10:52:18 by labdelkh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
MAIN_SRC = main.c
SRCS = ft_process.c ft_split.c ft_error.c \
		ft_apply_operations.c ft_cases_ab.c ft_cases_ba.c ft_check_dup.c \
		ft_check_sorted.c ft_free.c ft_lst_utils.c ft_rotate_type.c \
		ft_sort.c ft_stack_handle.c ft_push_operations.c ft_rotate_operations.c \
		ft_swap_operations.c ft_reverse_rotate.c
MAIN_OBJ = ${MAIN_SRC:.c=.o}
OBJS = ${SRCS:.c=.o}

${NAME}: ${MAIN_OBJ} ${OBJS}
		${CC} ${CFLAGS} ${MAIN_OBJ} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
		${RM} ${MAIN_OBJ} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
