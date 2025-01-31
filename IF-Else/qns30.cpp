//30.Write a program to determine the color of a traffic light based on its input.
#include <iostream>
using namespace std;

int main() {
    char light;
    cout << "Enter the traffic light color (R for Red, Y for Yellow, G for Green): ";
    cin >> light;

    if (light == 'R' || light == 'r') {
        cout << "Stop" << endl;
    } else if (light == 'Y' || light == 'y') {
        cout << "Ready to move" << endl;
    } else if (light == 'G' || light == 'g') {
        cout << "Go" << endl;
    } else {
        cout << "Invalid input" << endl;
    }

    return 0;
}
