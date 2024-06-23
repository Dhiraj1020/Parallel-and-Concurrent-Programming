# nested mutex issue Makefile
CXX		 = g++
CXXFLAGS = -Wall -std=c++11
TARGET	 = nested_mutrx_issue
SRC		 = nested_mutrx_issue.cpp

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)