//9. Write a program that rotates an array to the left by k positions. 
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout <<"Enter the size of array :"<<endl;
    cin>>size;
    int arr[size],k;
    cout<<"Enter the position :"<<endl;
    cin>>k;
    for(int i=0;i<size;i++)
    {
        cout <<"Enter the elements of array "<<i+1<<" :";
        cin>>arr[i];
    }
    k=k%size;
    int cop[k];
    for(int i=0;i<k;i++)
    {
        cop[i]=arr[i];
    }
    for(int j=k;j<size;j++)
    {
        arr[j-k]=arr[j];
    }
    for(int i=size-k;i<size;i++)
    {
        arr[i]=cop[i-(k+1)];
    }
    cout <<"The rotated array with k in left is :";
    for(int i=0;i<size;i++)
    {
        cout <<arr[i]<<" ";
    }
 return 0;   
}