# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/03 15:04:31 by lbrylins          #+#    #+#              #
#    Updated: 2024/12/18 21:50:51 by lbrylins         ###   ########.fr        #
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
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_strlcpy.c ft_strlcat.c \
ft_toupper.c ft_memcpy.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_substr.c ft_memmove.c ft_atoi.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS_SRC = ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstadd_back.c
OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS_SRC:.c=.o)
NAME = libft.a
AR = ar rcs

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
