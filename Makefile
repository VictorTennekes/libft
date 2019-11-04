# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: vtenneke <vtenneke@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/29 11:08:29 by vtenneke       #+#    #+#                 #
#    Updated: 2019/11/04 10:54:12 by vtenneke      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	libft
SRCS		=	ft_atoi ft_isalnum ft_isalpha ft_isascii\
	ft_isdigit ft_isprint ft_memset ft_strchr ft_strlcat ft_strlcpy ft_strlen\
	ft_strncmp ft_strnstr ft_strrchr ft_tolower ft_toupper ft_memset ft_bzero\
	ft_memcpy ft_memccpy ft_memchr ft_memcmp ft_memmove ft_calloc ft_strdup\
	ft_substr ft_strjoin ft_strtrim ft_split ft_itoa
CFILES		=	$(SRCS:%=srcs/%.c)
OFILES		=	$(CFILES:.c=.o)
INCLUDES	=	./includes
FLAGS		=	-Wall -Werror -Wextra -O2

all: $(NAME)

$(NAME): $(OFILES)
	@ar rc $(NAME).a $(OFILES)
	@echo "Done"

srcs/%.o: srcs/%.c
	@echo "Compiling: $<"
	@gcc -o $@ -c $< $(FLAGS) -I $(INCLUDES)

clean:
	@rm -f $(OFILES)

fclean: clean
	@echo "Cleaning: "
	@rm -f $(NAME)

re: fclean all 
