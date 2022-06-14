# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 15:13:55 by mtritsch          #+#    #+#              #
#    Updated: 2022/06/10 17:11:04 by mtritsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c utils.c u_int.c ptr.c hexa.c
OBJS	=	${SRCS:.c=.o}
NAME	=	libftprintf.a
LIBFT	=	libft
CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM	=	rm -f
AR	=	ar rc

${NAME} : ${OBJS}
	  @make -C ${LIBFT}
	  @cp ${LIBFT}/libft.a .
	  @mv libft.a ${NAME}
	  ${AR} ${NAME} ${OBJS}

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all :	${NAME}

clean :
	${RM} ${OBJS}
	@make clean -C ${LIBFT}

fclean : clean
	${RM} ${NAME}
	${RM} ${LIBFT}/libft.a

re : fclean all
