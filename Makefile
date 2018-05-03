#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/01 17:23:01 by ckrommen          #+#    #+#              #
#    Updated: 2018/05/02 20:51:00 by ckrommen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS = push_swap.c stackinit.c operations.c suboperations_1.c suboperations_2.c tools.c

CHECKSRCS = checker.c stackinit.c operations.c suboperations_1.c suboperations_2.c tools.c

FLAGS = -Wall -Wextra -Werror

NAME = push_swap

CHECK = checker

LIBFT = libft

all: $(NAME)

$(NAME):
	@echo "\033[32mCompiling source files\033[0m"
	@make -C $(LIBFT)
	@gcc $(FLAGS) $(SRCS) -L$(LIBFT) -lft -o $(NAME)
	@gcc $(FLAGS) $(CHECKSRCS) -L$(LIBFT) -lft -o $(CHECK)

clean:
	@echo "\033[32mCleaning up\033[0m"
	@rm -rf $(NAME)
	@rm -rf $(CHECK)
	@make clean -C $(LIBFT)

fclean: clean
	@echo "\033[32mFull clean\033[0m"
	@make fclean -C $(LIBFT)

re: fclean all

.PHONY: clean fclean all re