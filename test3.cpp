#include <iostream>
#include <utility>
#include <tuple>

using namespace std;

int main()
{
    tuple<int, string, int> studentRecord(10, "Student1", 10);
    studentRecord = make_tuple<int, string, int>(12, "Student2", 44);

    pair<int, string> studentRecord2(10, "Student1");
    studentRecord2 = make_pair<int, string>(14, "Student3");

    cout << studentRecord2.first << ", " << get<1>(studentRecord) << endl;

    return 0;
}