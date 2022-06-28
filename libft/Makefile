# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 02:18:15 by zcherrad          #+#    #+#              #
#    Updated: 2022/06/28 21:53:16 by zcherrad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS =ft_atoi.c\
ft_strcmp.c\
ft_bzero.c\
ft_calloc.c\
ft_putnbr_fd.c\
ft_putstr_fd.c\
ft_split.c\
ft_strchr.c\
ft_strjoin.c\
ft_strlen.c\
ft_putchar_fd.c\
get_next_line_utils.c\
get_next_line.c\


# B_SRCS = ft_lstadd_back.c\
# ft_lstadd_front.c\
# ft_lstlast.c\
# ft_lstnew.c\
# ft_lstsize.c\
# ft_lstdelone.c\
# ft_lstclear.c\

OBJS = $(SRCS:.c=.o)
# B_OBJS = $(B_SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra
CC = gcc
RM = rm -f
AR = ar rc

all: $(NAME)

$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

# bonus:$(B_OBJS) $(OBJS)
	# $(AR) $(NAME) $(B_OBJS) $(OBJS)

clean:
	$(RM) $(OBJS) 

fclean:clean
	$(RM) $(NAME)

re: fclean all