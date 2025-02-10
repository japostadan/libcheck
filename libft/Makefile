# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: japostad <japostad@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/30 16:59:24 by japostad          #+#    #+#              #
#    Updated: 2025/02/10 15:06:37 by japostad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_putnbr_fd.c \
	 ft_putendl_fd.c \
	 ft_putstr_fd.c \
	 ft_putchar_fd.c \
	 ft_striteri.c \
	 ft_strmapi.c \
	 ft_itoa.c \
	 ft_split.c \
	 ft_strtrim.c \
	 ft_strjoin.c \
	 ft_substr.c \
	 ft_strdup.c \
	 ft_calloc.c \
	 ft_atoi.c \
	 ft_strnstr.c \
	 ft_memcmp.c \
	 ft_memchr.c \
	 ft_strncmp.c \
	 ft_strrchr.c \
	 ft_strchr.c \
	 ft_tolower.c \
	 ft_toupper.c \
	 ft_strlcat.c \
	 ft_strlcpy.c \
	 ft_memmove.c \
	 ft_memcpy.c \
	 ft_bzero.c \
	 ft_memset.c \
	 ft_strlen.c \
	 ft_isascii.c \
	 ft_isprint.c \
	 ft_isalnum.c \
	 ft_isdigit.c \
	 ft_isalpha.c \
	 ft_str_toupper.c

B_SRC = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

FILES = $(SRC:.c=.o)
B_FILES = $(B_SRC:.c=.o)
all: $(NAME)

$(NAME): $(FILES)
	@ar rcs $(NAME) $(FILES)
	@echo "$(NAME) created"

%.o: %.c Makefile libft.h
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME) $(B_FILES)
	@ar rcs $(NAME) $(B_FILES)
	@echo "bonus compiled"

clean:
	@echo "Removing object files"
	@rm -rf $(FILES) $(B_FILES)

fclean: clean
	@echo "Removing $(NAME)"
	@rm -rf $(NAME) $(B_FILES)

re: fclean all

.PHONY: all clean fclean re bonus
