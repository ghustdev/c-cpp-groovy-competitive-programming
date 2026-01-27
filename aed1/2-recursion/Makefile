CC = gcc
CFLAGS = -Wall -Wextra -g

FILE_NAME = r4
TARGET = $(FILE_NAME).exe
SRC = $(FILE_NAME).c

INPUT = in.txt
OUTPUT = out.txt

all: save

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

run: $(TARGET)
	./$(TARGET)

save: $(TARGET)
	./$(TARGET) < $(INPUT) > $(OUTPUT)

clean:
	rm -f $(TARGET)