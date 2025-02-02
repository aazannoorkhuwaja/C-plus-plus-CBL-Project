//6. Create a program to reverse a number.
#include<iostream>
using namespace std;
int main (){
int num,first=0,sec;;
cout <<"Enter any number "<<endl;
cin>>num;
while(num!=0)
{
    first=(first*10)+(num%10);
    num=num/10;
}
cout <<first;
return 0;
}
