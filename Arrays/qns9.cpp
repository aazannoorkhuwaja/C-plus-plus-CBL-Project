//9. Write a program that rotates an array to the left by k positions. 
#include <iostream>
using namespace std;
int main()
{
    int size=5;
    int arr[size],k;
    cout<<"Enter the position :"<<endl;
    cin>>k;
    for(int i=0;i<size;i++)
    {
        cout <<"Enter the elements of array "<<i+1<<" :";
        cin>>arr[i];
    }
    for(int i=0;i<k;i++)
    {
        int temp=arr[size-i+1];
        arr[i+k]=temp;
        arr[size-i+1]=arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout <<arr[i]<<" ";
    }

}