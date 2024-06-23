# Data Race solution Makefile
CXX		 = g++
CXXFLAGS = -Wall -std=c++11
TARGET	 = atomic_demo
SRC		 = atomic_demo.cpp

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)