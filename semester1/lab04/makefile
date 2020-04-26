CXX = g++
CXXFLAGS = -Wall -g
SRC = stest.cpp strop.cpp
OBJ = $(SRC: .cpp = .o)
NAME = stest
LIB = strop.h

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $^ -o $@

stest.o: $($@: .o = .cpp) $(LIB)
	$(CXX) $(CXXFLAGS) $^ -c -o $@

strop.o: $($@: .o = .cpp) $(LIB)
	$(CXX) $(CXXFLAGS) $^ -c -o $@



clean:
	rm -rf *.o $(NAME)

run: $(NAME)
	./$(NAME)

val: $(NAME)
	valgrind ./$(NAME)


.PHONY: all clean run val
