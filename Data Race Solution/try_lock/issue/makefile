# nested mutex issue Makefile
CXX		 = g++
CXXFLAGS = -Wall -std=c++11
TARGET	 = mutex_issue
SRC		 = mutex_issue.cpp

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)