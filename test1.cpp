#include <iostream>
#include <vector>

using namespace std;

template<class TYPE>
struct Point
{
    TYPE x;
    TYPE y;
};

int main()
{
    vector<Point> aBunchOfPoints;
    Point<int> point;
    aBunchOfPoints.push_back(point);
    cout << aBunchOfPoints.size() << endl;
    return 0;
}