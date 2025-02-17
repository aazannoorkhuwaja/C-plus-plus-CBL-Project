//6. Create a program that merges two arrays into one. 
#include<iostream>
using namespace std;
int main()
{
    int size=5;
    int arr1[size]={1,4,2,6,5},arr2[size]={5,2,5,3,3},newarray[size+size];
    for (int i=0;i<5;i++)
    {
        newarray[i]=arr1[i];
        newarray[i+size]=arr2[i];
    }
    
    for (int i=0;i<size+size;i++)
    {
        cout<<newarray[i]<<" ";
    }

}