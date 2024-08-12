#include <string>
#ifndef PERSON
#define PERSON

struct Person {
    std::string name;
    int age;
};


struct PersonList {
    Person* people;
    int numPeople;
};
#endif