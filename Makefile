# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plieb <plieb@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/09 03:48:49 by plieb             #+#    #+#              #
#    Updated: 2014/01/09 03:49:53 by plieb            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SOURCES = fdf.c draw.c load_data.c tab_of_dot.c print.c color.c\

OBJECTS = $(subst .c,.o,$(SOURCES))

HEADERS = fdf.h libft/includes/libft.h /usr/include/mlx.h

FLAGS = -Wall -Werror -Wextra -I libft/includes -I /usr/include/X11

MLXFLAGS = -L/usr/lib/X11 -lmlx -L/usr/lib/i386-linux-gnu/ -lX11 -lXext -Llibft -lft

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
