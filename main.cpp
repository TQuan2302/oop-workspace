//Can not access private attribute of super class
//We can not have an array of different type (Even when initialize an array of object)
//When the subclass does not have a contructor,  the default constructor is called when initialize an object of subclass.

class A{
    protected://When using the "protected" keyword in parent class become private attribute in its subclass

        int a;
    public :
        void set_a(int new_a){
            this -> a = new_a;
        }
        int get_a() const{//"const" mean this function can not do any changes to the object
            return a;
        }
};

class B : public A{ // The keyword "public" mean the private attribute and function of A is hidden from B (B can not access them although they belong to B)
    private:
        double x;
    public:
        void set_x(double a_x){this-> x = a_x;}; 
        void set_a(double new_a){
            if(new_a<0){
                A:: set_a(0); 
            }
            else{
                A:: set_a(new_a); 
            }
        }
        double foo(){
            return x*a; 
        }
};

int main(){

    return 0;  
}