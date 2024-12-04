# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/03 15:04:31 by lbrylins          #+#    #+#              #
#    Updated: 2024/12/04 23:20:13 by lbrylins         ###   ########.fr        #
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
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c 
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