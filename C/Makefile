TARGET=
VERSION=

LDLIBS=
LDFLAG=

CFLAGS=-Wall -Werror -O3 -g -fsanitize=undefined -fsanitize=address -DNAME=\"$(TARGET)\" -DVERSION=\"$(VERSION)\"
CC=gcc

SRC=$(shell find . -name "*.c")
INCLUDE=include

all: clean $(TARGET) run

$(TARGET): $(SRC)
	$(CC) -I $(INCLUDE) -o $(TARGET) $(CFLAGS) $(LDFLAGS) $^ $(LDLIBS)

debug: $(TARGET)
	ulimit -c unlimited

install:
	sudo cp $(TARGET) /usr/local/bin/$(TARGET)

update: clean all 

run:
	./$(TARGET)

clean:
	rm -f $(TARGET)
