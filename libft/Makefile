# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plieb <plieb@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/08 21:47:03 by plieb             #+#    #+#              #
#    Updated: 2014/01/16 03:46:02 by plieb            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
		  ft_memdel.c ft_memmove.c ft_memset.c ft_bzero.c\
		  \
		  ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstlen.c\
		  ft_lstmap.c ft_lstnew.c ft_lstrev.c\
		  lst_dbl.c lst_dbl_del.c lst_dbl_display.c\
		  \
		  ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
		  ft_itoa.c ft_abs.c ft_atoi.c ft_sqrt.c ft_tolower.c ft_toupper.c\
		  get_next_line.c\
		  \
		  ft_printf.c ft_put_pf.c ft_put_pf_2.c ft_putchar.c ft_putchar_fd.c\
		  ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_base.c\
		  ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c\
		  \
		  ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c\
		  ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c\
		  ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c\
		  ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c\
		  ft_strnstr.c ft_strrchr.c ft_strrev.c ft_strsplit.c ft_strstr.c\
		  ft_strsub.c ft_strtrim.c\

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

