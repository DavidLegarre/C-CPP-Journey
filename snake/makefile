CC = gcc
CFLAGS = -std=c++23 -Wall -Wextra -g
TARGET = snake
SRCS = $(wildcard **/*.c)
OBJS = $(SRCS:.c=.o)

all: $(TARGET) run

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run:
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
