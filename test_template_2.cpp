#include<iostream> 
#include<vector> 
using namespace std; 

template<typename T, class C> 

class Point{//When define the data type of Point need to have tempplate: Point<floar, char> number(12.3, 'c)
    public: 
        Point(T x, C y){
            this->x = x; 
            this->y = y; 
        }
        T getX(){
            return x; 
        }
        C getY(){
            return y;
        }

    private: 
        T x = 0; 
        C y = 0; 
}; 

template<typename Z> 
Z printSth(Z value ){
    return value; 
}

int main(){
    vector<Point<float, char>> aBunchOfPoint;
    Point<float, char> f(1.2, 'c'); 
    Point<int, float> f2(1, 12.3); 
    

    cout <<f.getX() <<endl; 

    cout << printSth(213) << endl; 



    return 0; 
}