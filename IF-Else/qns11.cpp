//11. Write a program to find the absolute value of a number.
#include <iostream>
using namespace std;
int main(){
    int x;
    cout <<"Enter any number:"<<endl;
    cin>>x;
    if(x<0)
    {
        x=-x;
        cout <<"Absolute of Number is :"<<x<<endl;
    }
    else {
        cout <<"Absolute of Number is :"<<x<<endl;
    }

return 0;

}