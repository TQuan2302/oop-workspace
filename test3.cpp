#include<iostream>
using namespace std; 

struct IntArray
{
    int* a;
    int size = 0;
};

int main()
{
    IntArray i;
    i.a = new int[5]{};
    i.size = 5;
    IntArray j;
    j = i;

    delete[] i.a;
    i.a = new int[10]{};
    i.size = 10;
    i.a[0] = 3;
    cout << j.a[0] << endl;

    delete[] i.a;
    return 0;
}