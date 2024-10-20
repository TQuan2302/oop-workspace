//Does not change anything, error is intentional as an example. 
#include<iostream>
using namespace std; 

class Wizard{
    public: 
        Wizard(){power = 10;}
    protected: 
        int power = 5; 
}; 

class DarkWizard: public Wizard{
    public: 
        DarkWizard(){multiplier = 3;}
    protected: 
        double multiplier = 2; 
};

class EliteDarkWizard: public Wizard, public DarkWizard{ //Since EliteDarkWizard is inherited from Wizard and DarkWizard (which is inherited from Wizard)
    //->power is inherited twice (2 distinct instances of Wizard) -> Error
    public: 
        EliteDarkWizard(){}
        int getAttackPower(){return (power*multiplier) + boost; }
    private: 
        int boost = 10; 
}