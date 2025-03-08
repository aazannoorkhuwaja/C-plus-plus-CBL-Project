#include<iostream>
using namespace std;
int main(){
    int size,sum=0;
    cout <<"Enter the size of array :"<<endl;
    cin>>size;
    int arr[size];
    cout <<"Enter the numbers whose sumation you want: "<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    cout <<"The sum of all the  elements of the array is :"<<sum<<endl;
    

}