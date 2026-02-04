CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++20

OBJS = main.o math.o
TARGET = app

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

main.o: main.cpp math.h
	$(CXX) $(CXXFLAGS) -c main.cpp

math.o: math.cpp math.h
	$(CXX) $(CXXFLAGS) -c math.cpp

clean:
	rm -f *.o $(TARGET)
