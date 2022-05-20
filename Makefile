# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 13:45:51 by mtritsch          #+#    #+#              #
#    Updated: 2022/05/19 14:53:16 by mtritsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

CC :
	gcc

CFLAGS :
	-Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}

all :
	${NAME}

clean :
	rm -f ${OBJS}

fclean :
	rm -f ${NAME}

re : fclean all
