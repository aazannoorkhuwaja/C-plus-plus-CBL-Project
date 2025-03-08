//18. Create a program that counts the number of even and odd numbers in an array. 
#include<iostream>
using namespace std;
int main ()
{
    int size;
    int arr[size];
    cout <<"Enter the size of array :"<<endl;
    cin>>size;
    cout <<"Enter the numbers: "<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int count_even=0,count_odd=0;
    for (int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    cout <<"The number of evens in this number sequence is :"<<count_even<<endl;
    cout <<"The number of odd in this number sequence is :"<<count_odd<<endl;
    
}