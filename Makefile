# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/08 17:40:25 by gunkim            #+#    #+#              #
#    Updated: 2020/10/09 19:04:35 by gunkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = -cr

SRCS = ft_memset.c ft_bzero.c ft_strlen.c
OBJS = $(SRCS:.c=.o)

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $<

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
