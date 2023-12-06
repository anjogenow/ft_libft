# List of all mandatory functions

#include "libft.h"

- [x] isalpha
- [x] isdigit
- [x] isalnum
- [x] isascii
- [x] isprint
- [x] strlen
- [x] memset
- [x] bzero
- [x] memcpy
- [x] memmove
- [x] strlcpy
- [x] strlcat
- [x] toupper
- [x] tolower
- [x] strchr
- [x] strrchr
- [x] strncmp
- [ ] memchr
- [ ] memcmp
- [ ] strnstr
- [ ] atoi
- [ ] calloc
- [ ] strdup
- [ ] substr
- [ ] strjoin
- [ ] strtrim
- [ ] split
- [ ] itoa
- [ ] strmapi
- [ ] striteri
- [ ] putchar_fd
- [ ] putstr_fd
- [ ] putendl_fd
- [ ] putnbr_fd

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBRARY = libft.a
SRC_FILES = ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_toupper.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memcpy.c ft_memset.c ft_strlcat.c ft_strlen.c ft_strnstr.c ft_tolower.c
OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(LIBRARY)

$(LIBRARY):
	$(CC) -c $(SRC_FILES) -I libft.h
	ar rc $(LIBRARY) $(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(LIBRARY)

re: fclean all