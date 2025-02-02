//13.Write a program to sum all even numbers between 1 and n.
#include <iostream>
using namespace std;
int main (){
    int n,save=0,i=1;
    cout <<"Enter number upto which you want sum of even numbers"<<endl;
    cin>>n;
    while(i<=n)
    {
        if(i%2==0)
        {
           save=save+i;
        }
        i++;

    }
    cout <<"The sum of even numbers is: "<<save<<endl;
    return 0;

}