APPS = ./app
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

CXX = g++
FLAGS = -Wall -Werror -std=c++17

all: libeb myapps

libeb: \
	$(OBJ)/egg.o \
	$(OBJ)/list.o

myapps: cleanapp $(BIN)/app

$(OBJ)/%.o: $(SRC)/%.cpp $(INCLUDE)/%.h
	$(CXX) $(FLAGS) -c $< -I $(INCLUDE) -o $@

$(BIN)/app: $(APPS)/app.cpp
	$(CXX) $(FLAGS) $< $(OBJ)/*.o -I $(INCLUDE) -o $@

run:
	$(BIN)/app

clean:
	rm -rf $(BIN)/* $(OBJ)/*

cleanapp:
	rm -rf $(BIN)/*