//11. Write a program to find the intersection of two arrays. 
#include <iostream>
using namespace std;

int main() {
    int size1,size2;
    cout <<"Enter the size for array 1:";
    cin>>size1;
    cout <<"Enter the size for array 2:";
    cin>>size2;
    int arr1[size1];
    int arr2[size2];
    cout <<"enter the elements of array 1:"<<endl;
    for(int i=0;i<size1;i++)
    {
        cin>>arr1[i];
    }
    cout <<"enter the elements of array 2:"<<endl;
    for(int i=0;i<size2;i++)
    {
        cin>>arr2[i];
    }

    cout << "Intersection: ";
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout <<arr1[i]<<" ";
                arr2[j] = -1; 
                break; 
            }
        }
    }
    
    return 0;
}
