# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agenow <agenow@stdent.42berlin.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 18:01:21 by agenow            #+#    #+#              #
#    Updated: 2023/11/17 16:28:18 by agenow           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBRARY = libft.a
SRC_FILES = $(wildcard *.c)
OBJ_FILES = $(patsubst  %.c, %.o, $(SRC_FILES))
INCLUDES = ./includes

all: $(LIBRARY)

$(LIBRARY):
	$(CC) -c $(SRC_FILES) -I $(INCLUDES)
	ar rc $(LIBRARY) $(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(LIBRARY)

re: fclean all