//30.Create a program to find the maximum difference between any two elements in a series of inputs.
#include <iostream>
using namespace std;

int main() {
    int n, inp;
    
    cout << "Enter number of elements in the series: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input! Series must have at least one number." << endl;
        return 0;  
    }

    
    cout << "Enter number: ";
    cin >> inp;
    
    int max_value = inp;  
    int min_value = inp;  

    
    for (int i = 1; i < n; i++) {
        cout << "Enter number: ";
        cin >> inp;

        if (inp > max_value) {
            max_value = inp;
        }

        if (inp < min_value) {
            min_value = inp;
        }
    }

    int max_difference = max_value - min_value;
    cout << "The maximum difference is: " << max_difference << endl;

    return 0;
}
