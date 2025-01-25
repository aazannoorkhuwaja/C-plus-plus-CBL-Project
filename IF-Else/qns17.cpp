//17.Create a program to find the minimum of three numbers using if-else.
#include<iostream>
using namespace std;
int main ()
{
    int n1,n2,n3;
    cout <<"Enter numbers then we compare which is maximum: "<<endl;
    cin >>n1>>n2>>n3;
    if (n1<n2 && n1<n3){
        cout <<"Number : "<<n1<<" Is minimum"<<endl;
    }
    else if(n2<n1 && n2<n3){
        cout <<"Number : "<<n2<<" is minimum"<<endl;
    }
    else{
         cout <<"Number : "<<n3<<" is minimum"<<endl;
    }
    return 0;
}
