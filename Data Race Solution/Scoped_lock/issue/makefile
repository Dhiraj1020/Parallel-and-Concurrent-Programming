# Deadlock Demo Makefile
CXX		 = g++
CXXFLAGS = -Wall -std=c++17
TARGET	 = Two_mutex_issue
SRC		 = Two_mutex_issue.cpp

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)