//Demo on polymorphism

#include<iostream>
#include<string>


using namespace std; 

class A{
    protected: 
        int _s;
    public:
        A(int s): _s(s){};
        A(): _s(-1){}; 


        //Overloading the add() function with different parameter list.
        // void add(int j){
        //     _s = _s + j;
        // }

        // void add(double j){
        //     _s = _s + j;
        // }

        //Ask the compiler not to static binding the object to this function but using the function in the class that object belongs to in run time(Called 
        //dybamic binding or late binding, implemented using "virtual" keyword)
        virtual void print(){
            cout << "S = " << this->_s << endl; 
        }
};


class B : public A{
    private:
        double _k; 
    public:
        B(int s, double k): A(s), _k(k){}
        B() : B(0,0){}
        void print(){
            cout << "S = " << this->_s << " K = " << this-> _k << endl; 
        }
};

class C : public A{
    private:
        string _str; 
    public:
        C(int s, string str): A(s), _str(str){}
        C() : C(0,""){}
        void print(){
            cout << "S = " << this->_s << "_str = " << this-> _str << endl; 
        }
};

void test(A* object){
    object -> print(); 
}

int main(){
    // A* parentObjectA; 

    // A objectA(15); 
    // B objectB(12,45.9);

    //A pointer to a base class can point to an object of the derrived class

    // parentObjectA = &objectB; 

    //Statically binded to the print() implementation of the base class
    // test(&objectA); 
    // test(&objectB); 

    //Example for runtime polymorphism with dynamic binding
    A* a[3]; 
    a[0] = new B(); 
    a[1] = new C(); 
    a[2] = new A();

    for(int i = 0; i<3 ; i++){
        test(a[i]); 
    }


    return 0;
}