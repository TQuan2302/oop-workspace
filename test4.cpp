#include <iostream>
#include <utility>
#include <tuple>

using namespace std;

int main()
{
    tuple<int, string, int, int> studentRecord(10, "Student1", 10, 10);
    studentRecord = make_tuple<int, string, int, int>(12, "Student2", 44, 45); //Tuple can have as many as you want

    pair<int, string, int> studentRecord2(10, "Student1", 12);
    studentRecord2 = make_pair<int, string, int>(14, "Student3", 55); //Can only have 2 values. 

    cout << studentRecord2.first << ", " << get<1>(studentRecord) << endl;

    return 0;
}