//#5. Write a program to sort an array in ascending order using bubble sort. 
#include<iostream>
using namespace std;
int main (){
    //bubble sorting
    int size=5,arr[size]={1,8,3,2,5};
    for (int i=0;i<size-1;i++)
    {
       for (int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}