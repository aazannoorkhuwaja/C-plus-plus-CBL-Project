//13. Write a program to check if an array is a palindrome. 
#include<iostream>
using namespace std;
int main ()
{
    int size,arr[size];
    bool palindro=true;
    cout <<"Enter the size of array :"<<endl;
    cin>>size;
    cout <<"Enter the elements of the array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size/2;i++)
    {
        if (arr[i]!=arr[size-i])
        {
            palindro=false;
        }
    }
    if(palindro)
    {
        cout<<"Array Is Palindrome "<<endl;
    }
    else{
        cout <<"Array is not palindrome "<<endl;
    }
    return 0;
}