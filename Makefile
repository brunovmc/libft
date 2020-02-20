# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvidigal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/22 00:04:10 by bvidigal          #+#    #+#              #
#    Updated: 2020/02/19 21:27:42 by bvidigal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror
HEADER = libft.h
NAME = libft.a
SRC = ft_memset.c \
    ft_bzero.c\
    ft_memcpy.c\
    ft_memcpy.c\
	ft_memccpy.c\
    ft_memmove.c\
    ft_memchr.c\
    ft_memcmp.c\
	ft_strlen.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_isprint.c\
	ft_isdigit.c\
	ft_isalpha.c\
	ft_atoi.c\
	ft_isalnum.c\
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strncmp.c\
	ft_isascii.c\
	ft_strnstr.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_putchar_fd.c\
	ft_strmapi.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c
SRCB = ft_lstnew.c\
	   ft_lstadd_front.c\
	   ft_lstsize.c\
	   ft_lstlast.c\
	   ft_lstadd_back.c\
	   ft_lstdelone.c\
	   ft_lstclear.c\
	   ft_lstiter.c\
	   ft_lstmap.c
OBJ = $(SRC:.c=.o)
BOBJ = $(SRCB:.c=.o)
all: $(NAME)
$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"
bonus: $(OBJ) $(BOBJ)
	@ar rc $(NAME) $(OBJ) $(BOBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"
	@echo "bonus added"
%.o: %.c
	@gcc $(FLAG) -I includes -c $< -o $@
clean:
	@rm -f $(OBJ) $(BOBJ)
	@echo "OBJ deleted"
fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"
re: fclean all 
.PHONY: all, clean, fclean, re, bonus

