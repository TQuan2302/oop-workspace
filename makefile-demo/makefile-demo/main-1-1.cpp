#include <iostream>
#include <stdlib.h>

extern int sum_array(int*, int);

int main(int argc,char **argv) {
	int a[3] = {1, 2, 3};
	std::cout << sum_array(a, 3) << std::endl;
	return 0;
}
