//2. Create a program to find the smallest element in an array. 
#include<iostream>
using namespace std;
int main (){
    int arr[5]={1,5,2,13,3};
    int temp=arr[4];
    for(int i=0;i<5;i++)
    {
        if (arr[i]<temp){
            temp=arr[i];
        }
    }
    cout<<"The smallest element of array is :"<<temp<<endl;
    return 0;
}