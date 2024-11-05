#include<iostream>
#include<vector>
#include<algorithm>

using namespace std; 

int main(){
    vector<int> values{8,4,2,6,9}; 
    sort(values.begin(), values.end()); //Sort the number from largest to smallest

    vector<char> charValues{'x','b','c'}; //Sort the character in the alphabetical order. 
    sort(charValues.begin(), charValues.end());

    vector<string> stringValue{"hba","hah"};  //Compare each character of string in the vector, if equal, does nothing, else, compare them based on asciiz value 
    //A: 65 -> Z = 90; a: 97 -> z: 122 (English has 26 letters)
    sort(stringValue.begin(), stringValue.end());

    for(const auto& a: stringValue){
        cout << a << " ";
    }
    //for (auto elem : il) //Will create a copy of each element
    //for (auto& elem: il) //Won't create copy of each element in the container
    //for(const auto& a: values) //Does not create a copy of each element and does not allow to modify the element in container
    
    
    return 0; 
}