# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agenow <agenow@stdent.42berlin.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 18:01:21 by agenow            #+#    #+#              #
#    Updated: 2023/12/10 21:29:18 by agenow           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= $(wildcard *.c)
OBJS            = $(SRCS:.c=.o)
CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
NAME			= libft.a
all: $(NAME)
$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -c $(SRCS)
		ar rcs $(NAME) $(OBJS)
clean:
		$(RM) $(OBJS)
fclean: clean
		$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re
