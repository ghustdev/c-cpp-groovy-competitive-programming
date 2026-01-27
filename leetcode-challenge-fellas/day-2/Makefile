CC = g++
CFLAGS = -Wall -Wextra -g

FILE_NAME = marge-linked-list
TARGET = $(FILE_NAME).exe
SRC = $(FILE_NAME).cpp

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
	rm -f $(OBJ) $(TARGET)