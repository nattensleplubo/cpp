SRC =	main.cpp \
		Bureaucrat.cpp \

NAME = buro

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o) 

all: ${NAME} 

%.o: %.cpp
	${CXX} ${CXXFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):		$(OBJ)
				@${CXX} ${CXXFLAGS}  -o ${NAME} ${OBJ}
				@echo "${YELLOW}          [OK]\n"

clean:
	rm -f *.o
	
fclean: clean
	rm -f ${NAME}

re : fclean all

.PHONY: clean re fclean