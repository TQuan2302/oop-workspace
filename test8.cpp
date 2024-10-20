//Does not change anything, error is intentional as an example.
#include<iostream>
using namespace std; 

class Wizard{
    public: 
        Wizard(){}
        string name =  "Khalid Kashmiri"; 
    protected: 
        int manaForMeAndMyChildren = 10; 
    private: 
        int wizardOnlyPower = 10; 
}; 

class DarkWizard: private Wizard{
    public: 
        DarkWizard(){}
        int getPower(){return manaForMeAndMyChildren; }
};
    
class EliteDarkWizard:  public DarkWizard{
    public: 
        EliteDarkWizard(){}
        int getUltimatePower(){return manaForMeAndMyChildren}; 
}; 

int main(){
    EliteDarkWizard wiz; 
    cout << wiz.getPower() << endl; 
    return 0;
}