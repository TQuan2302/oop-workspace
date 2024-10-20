//Does not change anything, error is intentional as an example. 
#include<iostream>
using namespace std; 

class BaseMage
{
public:
    BaseMage(int power) { this->power = power; }
    BaseMage() : BaseMage(100) {}
    int getPower() const { return power; }
    void Speak() { cout << "It's magicin' time" << endl; }
    
protected:
    int power;
};

class DarkWizard : public BaseMage
{
public:
    DarkWizard() : multiplier(4) {}
    double getDarkWizardPower() { return power * multiplier; }
    void Speak() { cout << "It's dark magicin' time" << endl; }
    
private:
    double multiplier = 2;
};

int main()
{
    BaseMage b;
    b.DarkWizard::Speak();//Child call parent meethod -> OK
    //Parent call Child method -> Error: 
}