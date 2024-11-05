#include<iostream>
#include<vector>
#include<algorithm>

using namespace std; 

int main(){
    vector<int> values{1,2,3}; 
    auto found = find(values.begin(), values.end(), 9); //If the key is found then return the iterator to key position
    //Else return iterator to the end()
    //Iterator are pointer in this case. 

    cout << *found << endl; 
    return 0;
}