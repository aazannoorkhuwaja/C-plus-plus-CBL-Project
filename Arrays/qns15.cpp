//15. Write a program to implement linear search in an array if element find in array then return its index.
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {30, 10, 20, 50, 40};
    int num,size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number (10, 20, 30, 40, 50) whose index you want to find in array :"<<endl;
    cin>>num;
    
  for (int i=0;i<size;i++){
        if(num==arr[i])
        {
            cout <<"the index of the  " <<num<< " is  "<< i<<endl;
        }
    }
    cout <<"The number is not in the array "<<endl;
  return 0;


} 
