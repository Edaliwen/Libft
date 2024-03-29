# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avaltat <avaltat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/21 13:29:37 by avaltat           #+#    #+#              #
#    Updated: 2021/03/18 14:32:05 by avaltat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	  ft_isprint.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	  ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_bzero.c \
	  ft_calloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	  ft_memmove.c ft_memset.c ft_strdup.c ft_strnstr.c ft_substr.c \
	  ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putnbr_fd.c ft_putendl_fd.c ft_itoa.c ft_strmapi.c ft_split.c

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	ft_lstmap.c

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)
	
all: $(NAME)

bonus: $(NAME) $(OBJ_BONUS)
	ar rc $(NAME) $(OBJ_BONUS)
	ranlib $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^
	ranlib $@

%o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
		rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
