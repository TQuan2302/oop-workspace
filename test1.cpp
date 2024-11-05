#include<iostream>
#include<utility>
#include<tuple> 
using namespace std;
//Non-examinable on the templated version of tuple and pair
int main() {
    tuple<int, string> myTuple(10, "student");

    int i = 5;
    myTuple = make_tuple<int>(i, "student2");

    cout << get<1>(myTuple) << endl;

    return 0;
}