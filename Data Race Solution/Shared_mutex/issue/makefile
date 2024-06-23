# Data Race solution Makefile
CXX		 = g++
CXXFLAGS = -Wall -std=c++11
TARGET	 = read_writer_on_reasource
SRC		 = read_writer_on_reasource.cpp

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)