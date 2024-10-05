#include<iostream>
using namespace std; 

struct Song{
    string name = "";
    int length = 0; 
};

struct Album{
    Song* songs; 
};

int main(){
    Album a; 
    a.songs = new Song[5]; 
    a.songs[1].name = "Black Space";
    a.songs[1].length = 120; 
    a.songs[0].name = "Welcome to New York";
    a.songs[0].length = 150; 
    cout << a.songs->length << endl; 
      

    return 0; 
}