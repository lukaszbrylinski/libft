# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/03 15:04:31 by lbrylins          #+#    #+#              #
#    Updated: 2024/12/04 20:44:01 by lbrylins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# CC = cc
# CFLAGS = -Werror -Wextra -Wall
# SRC = ft_isalpha.c
# OBJS = ${SRC:.c=.o}
# NAME = libft.a
# AR = ar rcs
# $(NAME): $(OBJS)
# 	$(AR) $(OBJS) -o $(NAME)
# %.o: %.c 
# 	$(CC) $(CFLAGS) -c $< -o $@
# all: $(NAME)

# clean:
# 	rm -f $(OBJS)
# fclean: clean
# 	rm -f $(NAME)
# re: fclean $(NAME)

# .PHONY: all clean fclean re

CC = cc
CFLAGS = -Werror -Wextra -Wall
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c
OBJS = $(SRC:.c=.o)
NAME = libft.a
AR = ar rcs

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@
	
all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re