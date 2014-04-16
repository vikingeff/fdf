# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleger <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/04/16 17:27:47 by gleger            #+#    #+#              #
#    Updated: 2014/04/16 17:47:29 by gleger           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SOURCES = fdf.c draw.c load_data.c tab_of_dot.c print.c color.c\

OBJECTS = $(subst .c,.o,$(SOURCES))

HEADERS = fdf.h libft/includes/libft.h

FLAGS = -Wall -Werror -Wextra -I libft/includes -I /usr/X11/include

MLXFLAGS = -L/usr/X11/lib -lmlx -lX11 -lXext -Llibft -lft

LIBFT = libft/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	@make -C libft re

$(NAME): $(OBJECTS)
	@gcc $(FLAGS) $(MLXFLAGS) -o $(NAME) $(OBJECTS)
	@echo "Program [$(NAME)] : DONE !"

$(OBJECTS): $(SOURCES) $(HEADERS)
	@gcc $(FLAGS) -c $(SOURCES)

clean:
	@make -C libft clean
	@rm -f $(OBJECTS)
	@echo "Make clean : DONE !"

fclean: clean
	@make -C libft fclean
	@rm -f $(NAME)
	@echo "Make fclean : DONE !"

re: fclean all
