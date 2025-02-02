//10.Create a program to display all even numbers between 1 and 100.
#include <iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=100)
    {
        if(i%2==0)
        {
            cout<<"even no: "<<i<<endl;
        }
        i++;

    }
    return 0;

}