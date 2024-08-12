//Demo for Pointer to, and Array of Object

#include<iostream>
#include<fstream>

#include<string>

#include "student.h"


using namespace std; 

class Classroom{
    private:
        int class_size; 
        Student* students_records;
    public:
        Classroom(){
            class_size = 0;
            students_records = new Student[class_size];
        }; 
        Classroom(int a_class_size){
            class_size = a_class_size;
            students_records = new Student[class_size];
        }
        ~Classroom(){
            delete[] students_records; 
        }

        void read_student_records(string filename){
            ifstream students_records_file; 
            students_records_file.open(filename); 
            for(int i = 0; i<class_size; i++){
                string name;
                int id;
                double grade; 
                students_records_file >> name >> id >> grade; 
                students_records[i].set_name(name); 
                students_records[i].set_grade(grade); 
                students_records[i].set_ID(id); 
            }
        }
        void print_classroom(){
            for (size_t i = 0; i < class_size; i++)
            {
                cout << students_records[i].get_name() << 
                    "|" << students_records[i].get_ID() << 
                    "|" << students_records[i].get_grade() << endl; 

            }
            
        }
};


int main(){
    Classroom oop2022(3); //When the main finish, the destructor is also called
    oop2022.read_student_records("test.txt");
    oop2022.print_classroom(); 
    return 0;
}