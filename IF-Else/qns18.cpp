//18.Write a program that prints the largest digit of a given number.
#include<iostream>
using namespace std;
int main ()
{
    int n1,n2,numb;
    cout <<"Enter number form 1-99:"<<endl;
    cin>>numb;
    n1=numb%10;
    n2=numb/10;
    if (n1>n2){
        cout <<"Number : "<<n1<<" Is larger"<<endl;
    }
    else{
        cout <<"Number : "<<n2<<" Is larger"<<endl;
    }
    return 0;
}