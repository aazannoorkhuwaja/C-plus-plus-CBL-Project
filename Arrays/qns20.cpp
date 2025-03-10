//20. Create a program that finds the maximum difference between two elements in an array. 
#include<iostream>
using namespace std;
int main()
{
int arr[]={9,2,3,5,1,6};
int size=sizeof(arr)/sizeof(int);
int diff1,diff2,maxdiff;
int i=0;
while (i<size)
{
    diff1=arr[i]-arr[i+1];
    diff2=diff1;
    i++;
    diff1=arr[i]-arr[i+1];
    if(diff1>diff2)
    {
        maxdiff=diff1;
    }
    else{
        maxdiff=diff2;
    }
}
cout <<"The maximum difference in elements is:"<<maxdiff;
return 0;
}