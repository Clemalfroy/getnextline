# **************************************************************************** #
:w
:w
:q
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/18 12:07:59 by cmalfroy          #+#    #+#              #
#    Updated: 2017/11/09 12:54:00 by cmalfroy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH = ./

SRCS = $(PATH)ft_isprint.c\
	$(PATH)ft_putnbr_fd.c\
	$(PATH)ft_memdel.c\
	$(PATH)ft_lstdel.c\
	$(PATH)ft_lstmap.c\
	$(PATH)ft_lstadd.c\
	$(PATH)ft_nblen.c\
	$(PATH)ft_strdup.c\
	$(PATH)ft_lstiter.c\
	$(PATH)ft_strncat.c\
	$(PATH)ft_strtrim.c\
	$(PATH)ft_isupper.c\
	$(PATH)ft_memmove.c\
	$(PATH)ft_strequ.c\
	$(PATH)ft_putstr.c\
	$(PATH)ft_swap.c\
	$(PATH)ft_strncmp.c\
	$(PATH)ft_tolower.c\
	$(PATH)ft_atoi.c\
	$(PATH)ft_itoa.c\
	$(PATH)ft_memset.c\
	$(PATH)ft_putstr_fd.c\
	$(PATH)ft_striter.c\
	$(PATH)ft_strncpy.c\
	$(PATH)ft_toupper.c\
	$(PATH)ft_bzero.c\
	$(PATH)ft_lstnew.c\
	$(PATH)ft_print_words_tables.c\
	$(PATH)ft_strcat.c\
	$(PATH)ft_striteri.c\
	$(PATH)ft_strnequ.c\
	$(PATH)ft_isalnum.c\
	$(PATH)ft_memalloc.c\
	$(PATH)ft_putchar.c\
	$(PATH)ft_strchr.c\
	$(PATH)ft_strjoin.c\
	$(PATH)ft_strnew.c\
	$(PATH)ft_isalpha.c\
	$(PATH)ft_memccpy.c\
	$(PATH)ft_putchar_fd.c\
	$(PATH)ft_strclr.c\
	$(PATH)ft_strlcat.c\
	$(PATH)ft_strrchr.c\
	$(PATH)ft_isascii.c\
	$(PATH)ft_memchr.c\
	$(PATH)ft_putendl.c\
	$(PATH)ft_strcmp.c\
	$(PATH)ft_strlen.c\
	$(PATH)ft_strsplit.c\
	$(PATH)ft_isdigit.c\
	$(PATH)ft_memcmp.c\
	$(PATH)ft_putendl_fd.c\
	$(PATH)ft_strcpy.c\
	$(PATH)ft_strmap.c\
	$(PATH)ft_strstr.c\
	$(PATH)ft_strnstr.c\
	$(PATH)ft_islower.c\
	$(PATH)ft_memcpy.c\
	$(PATH)ft_putnbr.c\
	$(PATH)ft_strdel.c\
	$(PATH)ft_strmapi.c\
	$(PATH)ft_lstdelone.c\
	$(PATH)ft_strsub.c\
	$(PATH)ft_abs.c\

FLAG = -Wall -Werror -Wextra

HEADER = ./

OPTION = -c -I $(HEADER)

OBJ = ft_abs.o \
	ft_atoi.o\
	ft_bzero.o\
	ft_isalnum.o\
	ft_isalpha.o\
	ft_isascii.o\
	ft_isdigit.o\
	ft_islower.o\
	ft_isprint.o\
	ft_isupper.o\
	ft_itoa.o\
	ft_lstadd.o\
	ft_lstdel.o\
	ft_lstdelone.o\
	ft_lstiter.o\
	ft_lstmap.o\
	ft_lstnew.o\
	ft_memalloc.o\
	ft_memccpy.o\
	ft_memchr.o\
	ft_memcmp.o\
	ft_memcpy.o\
	ft_memdel.o\
	ft_memmove.o\
	ft_memset.o\
	ft_nblen.o\
	ft_print_words_tables.o\
	ft_putchar.o\
	ft_putchar_fd.o\
	ft_putendl.o\
	ft_putendl_fd.o\
	ft_putnbr.o\
	ft_putnbr_fd.o\
	ft_putstr.o\
	ft_putstr_fd.o\
	ft_strcat.o\
	ft_strchr.o\
	ft_strclr.o\
	ft_strcmp.o\
	ft_strcpy.o\
	ft_strdel.o\
	ft_strdup.o\
	ft_strequ.o\
	ft_striter.o\
	ft_striteri.o\
	ft_strjoin.o\
	ft_strlcat.o\
	ft_strlen.o\
	ft_strmap.o\
	ft_strmapi.o\
	ft_strncat.o\
	ft_strncmp.o\
	ft_strncpy.o\
	ft_strnequ.o\
	ft_strnew.o\
	ft_strnstr.o\
	ft_strrchr.o\
	ft_strsplit.o\
	ft_strstr.o\
	ft_strsub.o\
	ft_strtrim.o\
	ft_swap.o\
	ft_tolower.o\
	ft_toupper.o\

CC = gcc

all: $(NAME)

$(NAME):
	$(CC) $(FLAG) $(OPTION) $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)


clean : 
	/bin/rm -rf $(OBJ)

fclean : clean
	/bin/rm -rf  $(NAME)

re: fclean all
