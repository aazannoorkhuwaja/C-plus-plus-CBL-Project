//3. Write a program to calculate the average of elements in an array. 
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,2,13,3},size;
    size=sizeof(arr)/sizeof(int);
    float temp=0,avg;
    for(int i=0;i<size;i++)
    {
        temp+=arr[i];
        cout<<"The add is :"<<temp<<endl;
    }
    avg=temp/size;
    cout<<"The average of array elements is :"<<avg<<endl;
    return 0;

} 