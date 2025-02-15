//8. Create a program to determine the type of triangle based on angles.
#include <iostream>
using namespace std;

int main() {
    int angle1, angle2, angle3;
    cout << "Enter three angles of the triangle: ";
    cin >> angle1 >> angle2 >> angle3;

   
    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        
        int type;
        if (angle1 == angle2 && angle2 == angle3) {
            type = 3; // Equilateral
        } else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
            type = 2; // Isosceles
        } else {
            type = 1; // Scalene
        }

        
        switch (type) {
            case 3:
                cout << "Equilateral Triangle\n";
                break;
            case 2:
                cout << "Isosceles Triangle\n";
                break;
            case 1:
                cout << "Scalene Triangle\n";
                break;
        }
    } else {
        cout << "Invalid Triangle\n";
    }

    return 0;
}
