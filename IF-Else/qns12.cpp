//12.Create a program to check if a number is divisible by both 3 and 5.
#include<iostream>
using namespace std;
int main(){
    int n1;
    cout <<"Enter any Number:"<<endl;
    cin>>n1;
    if(n1%3 == 0 && n1%5 == 0)
    {
        cout <<"Number is divisble by 3 and 5 and that number is : "<<n1<<endl;
    }
    else {
        cout <<"Numebr is not divisible by 3 and 5:"<<endl;

    }
    return 0;
}