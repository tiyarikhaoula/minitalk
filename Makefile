# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/04 11:46:18 by ktiyari           #+#    #+#              #
#    Updated: 2024/05/04 11:46:29 by ktiyari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = minitalk.a
SRC = 

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $?

.o: .c
	$(CC) $(CFLAGS) -c $?

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all