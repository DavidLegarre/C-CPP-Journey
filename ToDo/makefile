CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC_DIR = src
INCLUDE_DIR = include
BIN_DIR = bin
DATA_DIR = data

SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(BIN_DIR)/%.o, $(SOURCES))
EXECUTABLE = $(BIN_DIR)/inventory_management

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

$(BIN_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCLUDE_DIR)

clean:
	rm -f $(EXECUTABLE) $(OBJECTS)

run: $(EXECUTABLE)
	@./$(EXECUTABLE)