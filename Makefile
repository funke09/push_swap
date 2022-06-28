# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/21 01:03:59 by zcherrad          #+#    #+#              #
#    Updated: 2022/06/28 21:25:01 by zcherrad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
LIBFT = libft/
LIB		= libft/libft.a
CHECKER = checker
CC		= cc
INC 	= include/push_swap.h
CFLAG	= -g3 -fsanitize=address
SRC		= 	src/main.c\
			src/actions.c\
			src/actions_1.c\
			src/actions_2.c\
			src/manage_tab.c\
			src/manage_tab1.c\
			src/check_args.c\
			src/check_arr.c	\
			src/check_tab.c
			
C_SRC = bonus/checker.c\
		bonus/actions_bonus.c\
		bonus/actions_bonus1.c\
		bonus/actions_bonus2.c\
		bonus/check_tab_bns.c\
		bonus/manage_arg.c\

#OBJ		= $(SRC:.c=.o)

#%.o: %.c
#	$(CC) $(CFLAG) -c $< -o $@
all: $(NAME)

$(NAME): $(LIB) $(SRC)
		$(CC) $(CFLAG) -I $(INC) $(SRC) $(LIB) -o $(NAME)
$(LIB):
		@make -C $(LIBFT)

bonus: $(CHECKER)

$(CHECKER): $(LIB) $(C_SRC)
		$(CC) $(C_SRC) $(CFLAG) -I $(INC) $(LIB) -o $(CHECKER)
# $(LIB):
# 		@make -C $(LIBFT)

clean:
		make -C libft clean
fclean:
		rm -f $(NAME) $(CHECKER)
		make -C libft fclean

re: fclean all
