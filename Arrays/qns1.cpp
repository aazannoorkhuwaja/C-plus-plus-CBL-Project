//1. Write a program to find the largest element in an array.  
#include <iostream>
using namespace std;
int main ()
{
    int arr[5]={1,5,2,13,3};
    int temp=arr[0];
    for(int i=0;i<5;i++)
    {
        if (temp>arr[i]){
        }
        else{
            temp=arr[i];
        }
    }
    cout<<"The Largest element of array is :"<<temp<<endl;
    return 0;
}