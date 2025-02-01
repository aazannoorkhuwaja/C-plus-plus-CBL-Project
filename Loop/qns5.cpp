//5. Write a program to display all prime numbers between 1 and 100.
#include<iostream>
using namespace std;
int main(){
    int count;
    for(int i=1;i<=100;i++)
    {
        count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
            if(count==2)
            {
                cout<<i<<" ";
            }
    }
    return 0;
}