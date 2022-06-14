# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 18:15:48 by mtritsch          #+#    #+#              #
#    Updated: 2022/06/08 15:14:05 by mtritsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_itoa.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c ft_bzero.c ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_toupper.c ft_calloc.c ft_memcmp.c ft_split.c ft_strmapi.c ft_isalnum.c ft_memcpy.c ft_strchr.c ft_strncmp.c ft_isalpha.c ft_memmove.c ft_strdup.c ft_strnstr.c ft_isascii.c ft_memset.c ft_striteri.c ft_strrchr.c ft_isdigit.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c ft_isprint.c ft_putendl_fd.c ft_strlcat.c ft_substr.c

BONUSSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

NAME	= libft.a

OBJS	= ${SRCS:.c=.o}

BONUSOBJS = ${BONUSSRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I

INCLUDES = ../

.c.o  :
	${CC} ${CFLAGS} ${INCLUDES} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}

all : ${NAME}

bonus : ${BONUSOBJS}
	ar rc ${NAME} ${BONUSOBJS}

clean :
	rm -f ${OBJS}

fclean : clean bclean
	rm -f ${NAME}

bclean :
	rm -f ${BONUSOBJS} 

re : fclean all
