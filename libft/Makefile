# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleger <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/04/16 17:37:02 by gleger            #+#    #+#              #
#    Updated: 2014/04/16 17:44:58 by gleger           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = ft_putchar.c \
		  ft_putstr.c \
		  ft_atoi.c \
		  ft_putnbr.c \
		  ft_abs.c \
		  ft_isdigit.c \
		  get_next_line.c \
		  ft_strchr.c \
		  ft_strdup.c \
		  ft_strlen.c \
		  ft_strcpy.c

HEADERS = includes/libft.h

OBJECTS = $(subst .c,.o,$(SOURCES))

WFLAGS = -Wall -Werror -Wextra -I includes

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@echo "Make Libft :\033[1;32m DONE !\033[m"

$(OBJECTS): $(SOURCES) $(HEADERS)
	@gcc $(WFLAGS) -c $(SOURCES)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

