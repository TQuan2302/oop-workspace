#include <iostream>

class Base{
public:
    Base() {
        std::cout << "Base C'tor" << std::endl;
    }
    
    ~Base() {
        std::cout << "Base D'tor" << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived C'tor" << std::endl;
    }
    
    ~Derived() {
        std::cout << "Derived D'tor" << std::endl;
    }
};

int main()
{
    Derived* dp = new Derived();
    delete dp;
    return 0;
}