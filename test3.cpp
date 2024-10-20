//Does not change anything, error is intentional as an example of "const". 
#include<iostream>
using namespace std; 

class BaseMage
{
public:
    BaseMage(int power) { this->power = power; }
    BaseMage() : BaseMage(100) {}
    int getPower(int addition) const { 
        int number = 0; 
        number +=1;//Change the variable defined inside the function -> ok
        addition+= 1; //Change the parameter ->ok
        power2 = power2 +1; //Change the data member of the function -> ok
        return power2; 
    }
    int getPower2()  { 
        power = power+ 1; 
        return power; 
    }    
    
protected:
    int power;
    int power2; 
};

class DarkWizard : public BaseMage
{
public:
    int getDarkWizardPower() { return power * multiplier; }

private:
    int multiplier = 1;
};

int main()
{
    DarkWizard d;
    cout << d.getDarkWizardPower() << endl;
}
