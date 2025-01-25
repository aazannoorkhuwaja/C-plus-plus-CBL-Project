//18.Write a program that prints the largest digit of a given number.
#include<iostream>
using namespace std;
int main ()
{
    int n1,n2;
    cout <<"Enter numbers then we compare which is maximum: "<<endl;
    cin >>n1>>n2;
    if (n1>n2){
        cout <<"Number : "<<n1<<" Is larger"<<endl;
    }
    else{
        cout <<"Number : "<<n2<<" Is larger"<<endl;
    }
    return 0;
}