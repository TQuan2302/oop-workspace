#include"Grade.h"

Grade:: Grade(int student_id, int course_id, string assignment, int value){
    this->student_id = student_id; 
    this->course_id = course_id; 
    this->assignment = assignment; 
    this->value = value; 
}

Grade:: Grade(){

    Grade(0,0, "", 0); 
}

int Grade:: get_student_id(){
    return student_id; 
}
int Grade:: get_course_id(){
    return course_id; 
}