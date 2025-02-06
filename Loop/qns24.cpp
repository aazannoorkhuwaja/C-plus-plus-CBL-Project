//24.Create a program that prints a number pyramid.
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<" enter number in which you want pyramid :"<<endl;
    cin>>n;
    for(int i=0;i<10;i++)
    {
        for(int j=10;j>0;j--)
        {
            cout<<" ";
        }
        for(int j=0;j<i+1;i++)
            {
                cout <<n;
            }
    cout <<endl;
    }

}