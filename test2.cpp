#include <iostream>

using namespace std;

int main() {
    // int64
    int x = 5;
    int y = 15;

    int* p = &x;
    int* q = &y;

    // int a = reinterpret_cast<int64_t>(p);
    // int b = reinterpret_cast<int64_t>(q);

    // cout << "sizeof(x) = " << sizeof(x) << endl;
    // cout << "sizeof(p) = " << sizeof(p) << endl;
    // cout << "sizeof(a) = " << sizeof(a) << endl;

    cout << p << endl;
    cout << q << endl;

    cout << q - p << endl;
    // cout << b - a << endl;

    return 0;
}