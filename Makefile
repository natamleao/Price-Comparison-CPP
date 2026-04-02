APPS = ./app
BIN = ./bin
INCLUDE = ./include
BUILD = ./build
SRC = ./src

CXX = g++
FLAGS = -Wall -Werror -std=c++17

all: libeb myapps

libeb: \
	$(BUILD)/egg.o \
	$(BUILD)/list.o

myapps: cleanapp $(BIN)/app

$(BUILD)/%.o: $(SRC)/%.cpp $(INCLUDE)/%.h
	$(CXX) $(FLAGS) -c $< -I $(INCLUDE) -o $@

$(BIN)/app: $(APPS)/app.cpp
	$(CXX) $(FLAGS) $< $(BUILD)/*.o -I $(INCLUDE) -o $@

run:
	$(BIN)/app

clean:
	rm -rf $(BIN)/* $(BUILD)/*

cleanapp:
	rm -rf $(BIN)/*