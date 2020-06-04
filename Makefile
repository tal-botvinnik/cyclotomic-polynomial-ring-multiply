CC      = g++
CFLAGS  = -Wall -O3 -std=c++0x -lgmp
BUILD   = multiply.o
SOURCE  = main.cpp

default: multiply

clean:
	rm -f $(BUILD)

lint:
	cpplint --recursive --extensions=hpp,cpp *

multiply: $(SOURCE)
	$(CC) $(SOURCE) -o $(BUILD) $(CFLAGS)
