#include <iostream>

using namespace std;

class GameObject {
public:
    GameObject() { gameObjectCount++; }
    int getObjectCount() { return gameObjectCount; }
    ~GameObject() { gameObjectCount--; }
private:
    static int gameObjectCount;
};

class LightSource : public GameObject {
public:
    LightSource() { lightSourceCount++; }
    int getLightSourceCount() { return lightSourceCount; }
    ~LightSource() { lightSourceCount--; }
private:
    static int lightSourceCount;
};


int GameObject::gameObjectCount = 0;
int LightSource::lightSourceCount = 0;

int main() {
    LightSource g1;
    GameObject* g2 = new LightSource();

    int a = g1.getObjectCount();
    int b = g1.getLightSourceCount();

    cout << a << " " << b << endl;

    return 0;
}

