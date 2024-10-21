#include<iostream> 
using namespace std; 
class Fan
{
public:
    void Speak()
    {
        cout << "I am a fan" << endl;
    }
};

class Swiftie : public Fan
{
public:
    void Speak(int times)
    {
        cout << "I heart taylor " << times << "x" << endl;
    }
};

int main()
{
    Swiftie* s = new Swiftie;
    s->Speak(3);
    return 0;
}