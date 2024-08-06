#include <iostream>
#include <stdlib.h>

extern double average(int*,int);

int main(int argc,char **argv) {
	int a[2] = { 2, 3};
	std::cout << average(a,0) << std::endl;
	return 0;
}
