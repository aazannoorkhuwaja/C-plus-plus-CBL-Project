#include <iostream>
using namespace std;

int main() {
    int size1, size2;

    cout << "Enter the size for array 1: ";
    cin >> size1;
    cout << "Enter the size for array 2: ";
    cin >> size2;

    int arr1[size1], arr2[size2], uni[size1 + size2];

    cout << "Enter the elements of array 1: " << endl;
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the elements of array 2: " << endl;
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

   
    int k = 0;
    for (int i = 0; i < size1; i++) {
        uni[k++] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        uni[k++] = arr2[i];
    }

    
    for (int i = 0; i < k - 1; i++) {
        for (int j = 0; j < k - i - 1; j++) {
            if (uni[j] > uni[j + 1]) {
                int temp = uni[j];
                uni[j] = uni[j + 1];
                uni[j + 1] = temp;
            }
        }
    }

    // Print unique elements
    cout << "Union is: ";
    cout << uni[0] << " "; // Print the first element
    for (int i = 1; i < k; i++) {
        if (uni[i] != uni[i - 1]) { // Skip duplicates
            cout << uni[i] << " ";
        }
    }

    return 0;
}
