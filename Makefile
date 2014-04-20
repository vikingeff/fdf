# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleger <gleger@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/04/16 17:27:47 by gleger            #+#    #+#              #
#    Updated: 2014/04/20 12:16:04 by gleger           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SOURCES = ft_put.c \
			ft_is.c \
			get_next_line.c \
			ft_str.c \
			fdf.c \
			draw.c \
			load_data.c \
			tab_of_dot.c \
			print.c \
			color.c

OBJECTS = $(SOURCES:.c=.o)

HEADERS = ./includes/fdf.h ./includes/libft.h

FLAGS = -Wall -Werror -Wextra -O3 -I ./includes -I /usr/X11/include

MLXFLAGS = -L/usr/X11/lib -lmlx -lX11 -lXext

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "\033[1;35;m[Linking] \t\t\033[0m: " | tr -d '\n'
	$(CC) $(FLAGS) $(MLXFLAGS) -o $@ $^ 
	@echo "\033[1;32;m[Success] \t\t\t\033[0m"

%.o: %.c $(HEADERS)
	@echo "\033[1;36;m[Compiling $<] \t\033[0m: " | tr -d '\n'
	$(CC) $(FLAGS) -c $<

clean:
	@echo "\033[0;33;m[Cleaning] \t\t\033[0m: " | tr -d '\n'
	rm -f $(OBJECTS)

fclean: clean
	@echo "\033[0;31;m[Deleting $(NAME)] \t\033[0m: " | tr -d '\n'
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re