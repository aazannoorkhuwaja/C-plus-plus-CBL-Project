//4. Create a program to print Fibonacci series up to n terms.
#include<iostream>
using namespace std;
int main ()
{
    int n,first=0,sec=1,sum;
    cout <<"Enter any number: "<<endl;
    cin>>n;
    cout<<first<<" "<<sec<<" ";
    for(int i=2;i<n;i++){
        sum=first+sec; // here we get 1,2,3,5,8....
        cout <<sum<<" ";
        first=sec; // this will transfer 1 to first
        sec=sum; //and this will trasnfer add of first two which is 1 to sec
    }
    return 0;
}