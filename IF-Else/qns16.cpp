//16.Write a program to determine the maximum of two numbers using if-else.
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout <<"Enter numbers then we compare which is maximum: "<<endl;
    cin >>n1>>n2;
    if (n1>n2){
        cout <<"Number : "<<n1<<" Is Maximum then:"<<n2<<endl;
    }
    else{
        cout <<"Number : "<<n2<<" Is Maximum then:"<<n1<<endl;
    }
    return 0;
}