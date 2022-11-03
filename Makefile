# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 09:35:22 by agil-rey          #+#    #+#              #
#    Updated: 2022/10/30 09:35:22 by agil-rey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c print.c utils.c ft_hex_nbr.c

CC = gcc -c

FLAGS = -Wall -Werror -Wextra

OBJS = ${SRCS:%.c=%.o}

${NAME}: ${OBJS}
	$(MAKE) bonus -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) -c $(SRCS)
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	$(MAKE) clean -C ./libft
	rm -f ${OBJS} ${BONUS_OBJS}

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f ${NAME}

re: fclean all