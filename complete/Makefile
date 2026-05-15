NAME	=	libft.a

SRC	=	ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memset.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_strlen.c 

OBJ	=	$(SRC:.c=.o)

CC	=	cc
# The compiler used to build the project.

CFLAGS	= -Wall -Wextra -Werror

AR = ar rcs
# 'ar' = archive tool (used to create static libraries)
# r = replace/add object files
# c = create archive if it doesn't exist
# s = create index (symbol table for linker)

all: $(NAME)

# Default rule when: bash make

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# This builds the static library.
# Dependency: all .o files must exist first.
#
# Then:
# ar rcs libft.a ft_bzero.o ft_strlen.o ...
#
# This packages all object files into one library file.

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Pattern rule: how to build ANY .o file from a .c file.
#
# Example:
# ft_strlen.o depends on ft_strlen.c
#
# $< = input file (.c)
# $@ = output file (.o)
#
# Command becomes:
# cc -Wall -Wextra -Werror -c ft_strlen.c -o ft_strlen.o

clean:
	rm -f $(OBJ)

# Clean files

fclean:
	rm -f $(OBJ) $(NAME)

# Clean files + library

re: fclean all

# Clean and make again. 

.PHONY: all clean fclean re

