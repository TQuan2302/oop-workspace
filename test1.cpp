#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
    int book_id;
};

int main() {
    Book* b1;
    b1->title = "Book1";
    cout << b1->title << endl;
    return 0;
}