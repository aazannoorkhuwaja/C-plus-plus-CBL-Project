//17. Write a program to find the second largest element in an array. 
#include<iostream>
using namespace std;
int main ()
{
    int arr[]={1,7,2,10,3};
    int size=sizeof(arr)/sizeof(int);
    int largest=arr[0], second_largest;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>largest){
            second_largest = largest;
            largest = arr[i];
        }
        
        else if(arr[i]>second_largest && arr[i]!=largest)
            {
                second_largest=arr[i];
            }
        
    }
            cout<<"The second largest is :" <<second_largest<<endl;
            cout <<"The largest is :" <<largest<<" ";
  return 0;
}