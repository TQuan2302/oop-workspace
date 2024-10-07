main: USBConnection.cpp USBConnection.h main_USB.cpp
	g++ USBConnection.cpp USBConnection.h main_USB.cpp -o main.o
	./main.o