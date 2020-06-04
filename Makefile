# Copyright (C) 2020 Francisco Vial - All Rights Reserved
# You may use, distribute and modify this code under the
# terms of the WTFPL.

CC      = g++
CFLAGS  = -Wall -O3 -std=c++0x -lgmp
BUILD   = multiply.o
SOURCE  = main.cpp

default: multiply

clean:
	rm -f $(BUILD)

lint:
	cpplint --recursive --extensions=c,h,hpp,cpp *

multiply: $(SOURCE)
	$(CC) $(SOURCE) -o $(BUILD) $(CFLAGS)
