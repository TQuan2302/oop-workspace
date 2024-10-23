#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<int, string> studentRecord;
    studentRecord.first = 10;
    studentRecord.second = "Student Name";

    cout << studentRecord.second << endl;

    return 0;
}