# Data Race Demo Makefile
CXX		 = g++
CXXFLAGS = -Wall -std=c++11
TARGET	 = Data_Race_Demo
SRC		 = Data_Race_Demo.cpp

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)