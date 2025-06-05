# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 17:16:48 by isainz-r          #+#    #+#              #
#    Updated: 2024/02/02 18:42:06 by isainz-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the library file to create
NAME    = libft.a

# Compiler to use
CC      = cc

# Compiler flags: 
# -Wall enables all warnings
# -Werror turns warnings into errors
# -Wextra enables extra warnings
CFLAGS  = -Wall -Werror -Wextra

# Archive tool to create static libraries
AR      = ar

# Archive flags:
# -r inserts/updates files
# -c creates the archive if it doesn't exist
# -s creates an index (for faster linking)
ARFLAGS = -rcs

# List of source files for the mandatory part
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
      ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
      ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
      ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
      ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# List of source files for the bonus part (linked list functions)
SRCSBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
            ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
            ft_lstmap_bonus.c

# Corresponding object files for the bonus source files
OBJSBONUS = $(SRCSBONUS:.c=.o)

# Corresponding object files for the mandatory source files
OBJS = $(SRCS:.c=.o)

# Default target: build the library
all: $(NAME)

# Create the library by archiving the compiled object files
$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

# Target to build the library using bonus files
bonus: $(OBJSBONUS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJSBONUS)

# Remove all compiled object files
clean:
	@rm -f $(OBJS) $(OBJSBONUS)

# Clean everything, including the library file
fclean: clean
	@rm -f $(NAME)

# Rebuild everything from scratch
re: fclean all

# Declare these targets as phony to avoid conflicts with files of the same name
.PHONY: clean fclean re all bonus
