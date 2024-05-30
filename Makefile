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

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

CLIENT = client
SERVER = server

CLIENT_SRC = client.c functions.c
SERVER_SRC = server.c functions.c

CLIENT_OBJ = $(CLIENT_SRC:.c=.o)
SERVER_OBJ = $(SERVER_SRC:.c=.o)

all: $(CLIENT) $(SERVER)

$(CLIENT): $(CLIENT_OBJ)
	$(CC) $(CFLAGS) -o $(CLIENT) $(CLIENT_OBJ)

$(SERVER): $(SERVER_OBJ)
	$(CC) $(CFLAGS) -o $(SERVER) $(SERVER_OBJ)

clean:
	$(RM) $(CLIENT_OBJ) $(SERVER_OBJ)

fclean: clean
	$(RM) $(CLIENT) $(SERVER)

re: fclean all