SRCS	= main.cpp ClapTrap.cpp ScavTrap.cpp FlagTrap.cpp DiamondTrap.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= trap

COMPILER	= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDE	= none

HEADER	= none

all:	$(NAME)

$(NAME): $(OBJS)
	$(COMPILER) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp
	$(COMPILER) $(FLAGS) -c $<  -o $(<:.cpp=.o)

.PHONY:	clean fclean re bonus bench bclean
