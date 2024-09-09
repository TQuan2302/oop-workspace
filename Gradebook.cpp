#include"Gradebook.h"

void Gradebook:: addGrade(int student_id, int course_id, string assignment, int value){
    Grade grade(student_id, course_id, assignment, value); 
    grades[index] = &grade; 
    index++; 
}
Gradebook:: Gradebook(){
    index = 0; 
    grades = new Grade*[100]; 
}