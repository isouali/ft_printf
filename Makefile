# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isouali <isouali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 11:05:45 by isouali           #+#    #+#              #
#    Updated: 2021/12/18 15:11:04 by isouali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SOURCES = ft_format.c\
		  ft_printf.c\
		  ft_putchar.c\
		  ft_putnbr.c\
		  ft_putstr.c\
		  ft_putptr.c\
		  ft_puthex.c\
		  ft_puthex_a.c\
		  ft_putu.c\
		  ft_strlen.c
INC = ft_printf.h
FLAGS = -Wall -Wextra -Werror
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)
$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)
%.o: %.c $(INC)
	$(CC) -c $(FLAGS) $^
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all
