//14.Create a program that prints the numbers in reverse order.
#include <iostream>
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