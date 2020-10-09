# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/08 17:40:25 by gunkim            #+#    #+#              #
#    Updated: 2020/10/09 14:14:49 by gunkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = -cr

SRCS = ft_memset.c ft_bzero.c ft_strlen.c
OBJS = $(SRCS:.c=.o)

TARGET = libft.a

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(AR) $(ARFLAGS) $(TARGET) $(OBJS)

%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $<

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all

.PHONY: all clean fclean re
