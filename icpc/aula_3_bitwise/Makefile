CC = g++
CFLAGS = -Wall -Wextra -g

FILE_NAME = b2
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
	rm -f $(TARGET)