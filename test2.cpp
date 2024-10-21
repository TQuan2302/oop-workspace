#include<iostream>
using namespace std; 

class Window
{
protected:
    string name;
public:
    Window(string n) : name(n) {}
    Window() : Window("basic window") {}
    void printName() { 
        cout << "Base class called" << endl; 
        cout << name << endl; }
};

class ImageViewer : public Window
{
private:
    string imagePath = "";
public:
    ImageViewer(string n, string path) : Window(n), imagePath(path) {}
    ImageViewer() : ImageViewer("Image Display", "blank.png") {}
    string getImagePath() { return imagePath; }
    void printName() { cout << name << "|" << imagePath << endl; }
};

void test(ImageViewer w)
{
    w.printName();
}

int main()
{
    ImageViewer disp = ImageViewer("Image Display", "blank.org");
    test(disp);
}