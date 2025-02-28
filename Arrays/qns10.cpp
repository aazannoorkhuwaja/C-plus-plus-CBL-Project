//10. Create a program that rotates an array to the right by k positions. 
#include <iostream>
using namespace std;
int main (){
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
    cout <<"the array Before ROTATE is :";
    for(int i=0;i<size;i++)
    {
       cout<<arr[i]<<" ";
    }
    k=k%size;
    int temp[k];
    for(int i=0;i<k;i++)
    {
        temp[i]=arr[(size-k)+i];
    }
    for(int i=size-(k+1);i>=0;i--)
    {
          arr[i+k] = arr[i];
    }
    for(int i=0;i<k;i++)
    //mistake in 6 arrays and 2 position 
    {
        arr[i]=temp[i];
    }
    cout <<"the array is :";
    for(int i=0;i<size;i++)
    {
       cout<<arr[i]<<" ";
    }
}