SRC =	main.cpp \
		Base.cpp \
		A.cpp \
		B.cpp \
		C.cpp \

NAME = identify

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o) 

all: ${NAME} 

%.o: %.cpp
	${CXX} ${CXXFLAGS} -g -c $< -o ${<:.cpp=.o}

$(NAME):		$(OBJ)
				@${CXX} ${CXXFLAGS} -g -o ${NAME} ${OBJ}
				@echo "${YELLOW}          [OK]\n"

clean:
	rm -f *.o
	
fclean: clean
	rm -f ${NAME}

re : fclean all

.PHONY: clean re fclean