#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, breadth;

public:
    void area() {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
        cout << "Area: " << length * breadth << endl;
    }

    void perimeter();
};

void Rectangle::perimeter() {
    cout << "Perimeter: " << 2 * (length + breadth) << endl;
}

int main() {
    Rectangle r;
    r.area();
    r.perimeter();
    return 0;
}
