//27.Write a program to calculate the average of a series of numbers.
#include<iostream>
using namespace std;
int main()
{
float n,i=1,sav=0,avg;
cout <<"Enter Number :"<<endl;
cin>>n;
while(i<=n)
{
sav+=i;
avg=sav/n;
i++;
}
cout <<"The average of series is :"<<avg;
return 0;
}