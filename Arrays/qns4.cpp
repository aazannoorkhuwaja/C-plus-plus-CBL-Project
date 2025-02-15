//4. Create a program to reverse the elements of an array. 
#include<iostream>
using namespace std;
int main ()
{
    int arr[]={1,5,2,13,3},size,sav,first;
    size = sizeof(arr)/sizeof(int);
        for(int j=0;j<size/2;j++)
        {
           
            sav=arr[size-(j+1)];
            first=arr[j];
            arr[j]=sav;
            arr[size-(j+1)]=first;
            
        }
        for(int j=0;j<size;j++)
        {
           cout <<"The reverse array is :"<<arr[j]<<endl;
        }

}
