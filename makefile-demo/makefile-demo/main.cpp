#include <iostream>
#include <string>

extern int sum_positive(int[], int);

int main() {
    int test_array[5] = {5,3,4,-1,8};
    // std::cout << sum_positive(test_array, 5) << std::endl;
    std::string s1 = "pine", s2 = "apple";
    char a[4] = {'a', 'b', 'c', 'd'};
    std::string s_array[2] = {"pine", "apple"};
    // char b = s1;
    std::cout << s_array[0][0] << std::endl;
    return 0;
}