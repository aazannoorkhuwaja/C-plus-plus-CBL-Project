//28.Create a program to print the factorial of numbers from 1 to n.
#include<iostream>
using namespace std;
int main()
{
int n,i=1,fact=1,avg;
cout <<"Enter Number :"<<endl;
cin>>n;
while(i<=n)
{
fact*=i;
cout <<"The factorial of "<<i<<" Is :"<<fact<<endl;
i++;
}
return 0;
}