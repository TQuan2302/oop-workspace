#include<iostream>
using namespace std; 

class Wizard{
    public: 
        Wizard(){cout << "Regular time"; }
    protected: 
        int power = 5; 
}; 

class DarkWizard{
    public: 
        DarkWizard(){cout << "Dark time";}
    protected: 
        double multiplier = 2; 
};
    
class EliteDarkWizard: public DarkWizard, public Wizard{//Call the default constructor in the order here: DarkWizard -> Wizard
    public: 
        EliteDarkWizard(){cout << "Chaos time";}
        int getAttackPower(){return (power*multiplier) + boost; }
    private: 
        int boost = 10; 
}; 

int main(){
    EliteDarkWizard wiz; 
    return 0;
}