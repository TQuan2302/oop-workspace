#include<iostream>
#include<string.h>

using namespace std;

class Student{
    private:
        string name;
        int ID; 
        double grade; 
    public:
    Student(); 
    Student(string s_name, int s_ID, double s_grade); 
    string get_name(){ return name;} 
    int get_ID(){return ID;}
    double get_grade(){return grade;}
    void set_name(string new_name ){ name = new_name;}
    void set_ID(int new_ID ){ID = new_ID;}
    void set_grade(double new_grade){grade = new_grade;}
    bool is_pass();
    ~Student();

};

Student:: Student(): name(""), ID(0), grade(0.0){
    //Create 5 Student objects with the "new" keyword in demo3.cpp
    cout << "An object of class Student was created\n"; 
}

Student:: Student(string s_name, int s_ID, double s_grade){
    name = s_name;
    ID = s_ID;
    grade = s_grade;  
}

bool Student:: is_pass(){
    if(grade < 50){
        return false; 
    }
    else{
        return true; 
    }
}

Student:: ~Student(){//Destructor: Using for delete the memory allocated in heap. Run every time when an object goes out of scope(Function return)
//And when call "delete" keyword. 
    cout << "A Student object was deleted\n"; 
}