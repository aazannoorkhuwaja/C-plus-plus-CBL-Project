//23.Write a program to find the sum of digits of a number.
#include <iostream>
using namespace std;
int main ()
{
    int sum,n,st=0;
    cout <<"enter the number :"<<endl;
    cin>>n;
    while (n!=0)
    {
        st=st+n%10;
        n=n/10;
        
    }
    cout   <<"Sum of digits is :"<<st<<endl;
    return 0;
}