LDLIBS =
LDFLAGS +=

CFLAGS=-Wall -Werror -O3
CC=gcc

SRC=$(wildcard src/*.c)
INCLUDE=include

TARGET=

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) -I §(INCLUDE) -o $(TARGET) $(CFLAGS) $(LDFLAGS) $^ $(LDLIBS)

debug: $(TARGET)
	ulimit -c unlimited
	./$(TARGET) -f root mount

install:
	sudo cp $(TARGET) /usr/local/bin/$(TARGET)

update: clean all install

clean:
	rm -f $(TARGET)
