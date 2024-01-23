# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 09:37:24 by ftholoza          #+#    #+#              #
#    Updated: 2023/11/15 16:51:12 by ftholoza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror -g
SRCS = $(addprefix ft_, $(SRC))
OBJS = $(addprefix ft_, $(OBJ))
OBJBS = $(addprefix ft_, $(OBJB))
SRCBS = $(addprefix ft_, $(SRCB))
ALLOBJS = $(OBJS) $(OBJBS)
ALLSRCS = $(SRCS) $(SRCBS)
HEADER = libft.h
SRCB = lstmap_bonus.c lstiter_bonus.c lstclear_bonus.c lstnew_bonus.c lstadd_front_bonus.c lstsize_bonus.c lstlast_bonus.c lstadd_back_bonus.c lstdelone_bonus.c
SRC = atoi.c bzero.c calloc.c strncmp.c strmapi.c isalnum.c substr.c isalpha.c isascii.c strtrim.c isdigit.c isprint.c memchr.c memcmp.c memcpy.c memmove.c memset.c strchr.c strdup.c strlcat.c strlcpy.c strlen.c strnstr.c strrchr.c tolower.c toupper.c itoa.c putchar_fd.c putendl_fd.c putnbr_fd.c putstr_fd.c split.c striteri.c strjoin.c
OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)

all = bonus
NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS) -I Includes
clean:
	rm -f $(ALLOBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
bonus : $(OBJBS) $(OBJS)
	ar rcs $(NAME) $(OBJBS) $(OBJS)
$(OBJBS) : $(SRCBS)
	$(CC) $(FLAGS) -c $(SRCBS) -I Includes
PHONY.: re all clean fclean bonus
