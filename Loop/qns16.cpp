//16.Create a program to print a triangle of stars.
#include <iostream>
using namespace std; 
int main(){
    int n=5;    
for(int i=1;i<=n;i++)
{
    for(int j=n-i;j>0;j--)
    {
        cout<<" ";
    }
    for(int j=0;j<i;j++)
    {
        if(j==0)
        {
            continue;
        }
        cout<<"*";
    }
    for(int j=0;j<i;j++)
    {
        cout<<"*";
    }
    cout <<endl;
}
return 0;
}