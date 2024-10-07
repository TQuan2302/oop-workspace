main: USBConnection.cpp USBConnection.h test-1-1.cpp
	g++ USBConnection.cpp USBConnection.h test-1-1.cpp -o main.o
	./main.o