NAME = ClapTrap

FLAG =  c++

FLAGS =  -Wall -Wextra -Werror -std=c++98
 
HEADER = ./ClapTrap.hpp /ScavTrap.cpp ./FragTrap.hpp

SRC = ./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp  ./FragTrap.cpp


OBJ = $(SRC:.cpp=.o)

all : $(NAME)


$(NAME) : $(OBJ) 
		$(FLAG) $(FLAGS)  $^ -o $@


%.o : %.cpp ${HEADER} 
	$(FLAG) $(FLAGS)  $< -c -o $@ 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) 

re: fclean all 