//24.Create a program that prints a number pyramid.
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<" enter number in which you want pyramid :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {
            if(k==0)
            {
                continue;
            }
            cout <<"*";
        }
        for(int k=0;k<=i;k++)
        {
            cout <<"*";
        }

    cout <<endl;
    }
    return 0;

}