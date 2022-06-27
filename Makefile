# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macos <macos@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/21 01:03:59 by zcherrad          #+#    #+#              #
#    Updated: 2022/06/27 16:35:20 by macos            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
LIB		= libft/libft.a
CHECKER = checker
CC		= cc
INC 	= include/push_swap.h
CFLAG	=  -g3 -fsanitize=address
SRC		= 	src/main.c\
			src/actions.c\
			src/actions_1.c\
			src/actions_2.c\
			src/manage_tab.c\
			src/manage_tab1.c\
			src/check_args.c\
			src/check_arr.c	\
			src/check_tab.c
			
# C_SRC = checker/checker.c\
# 		src/actions.c\
# 		src/actions_1.c\
# 		src/actions_2.c\
# 		src/check_tab.c\

#OBJ		= $(SRC:.c=.o)

#%.o: %.c
#	$(CC) $(CFLAG) -c $< -o $@
	
all: $(NAME)

$(NAME): $(LIB) $(SRC)
		$(CC) $(CFLAG) -I $(INC) $(SRC) $(LIB) -o $(NAME)
$(LIB): libft/
		make -C libft

# $(CHECKER): $(LIB) $(C_SRC)


clean:
		make -C libft clean
fclean:
		rm -rf $(NAME)
		make -C libft fclean

re: fclean all
