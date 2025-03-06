//14. Create a program that finds the missing number in an array of n
#include<iostream>
using namespace std;
int main ()
{
    int arr[]={1, 2, 3, 5, 6, 7, 8};
    int n=sizeof(arr)/sizeof(int);

    int missing=0 ,seq=1;
    for(int i=0; i<n;i++)
    {
        if(arr[i]!=seq){
            missing=seq;
            seq++;
        }
        seq++;
    }
    cout <<"The missing number in array is :"<<missing<<endl;
    return 0;
}