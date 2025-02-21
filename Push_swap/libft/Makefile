# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 20:32:53 by rmunoz-c          #+#    #+#              #
#    Updated: 2024/10/31 15:48:47 by rmunoz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

AR= ar -rcs

CC= cc
CFLAGS= -Wall -Werror -Wextra

SRC	=		ft_bzero.c \
			ft_strchr.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_isdigit.c \
			ft_isalpha.c \
			ft_putnbr_fd.c \
			ft_itoa.c \
			ft_atoi.c \
			ft_isascii.c \
			ft_isalnum.c \
			ft_striteri.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_strlen.c \
			ft_strlcpy.c \
			ft_isprint.c \
			ft_strrchr.c \
			ft_strnstr.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strdup.c \
			ft_calloc.c \
			ft_strmapi.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_memcpy.c \
			ft_strtrim.c \
			ft_putendl_fd.c \
			ft_strlcat.c \
			ft_memset.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_split.c \
			ft_sqrt.c \
			ft_error.c \
			ft_arraylen.c \
			ft_atoll.c \
			ft_free_array.c \
			ft_strcmp.c \
			ft_quicksort.c \
			ft_index.c \
			ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \

OBJ= $(SRC:.c=.o) 

all: $(NAME)

$(NAME): $(OBJ) libft.h
	$(AR) $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -o $@ $< -c

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.DEFAULT_GOAL: all

.PHONY: all clean fclean re
