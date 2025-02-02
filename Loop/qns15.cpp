//15.Write a program to find the GCD of two numbers using loops.
#include<iostream>
using namespace std;
int main ()
{
    int n1,n2,gcd,count1=0,count2=0,save1,save2;
    cout<<"Enter two numbers :";cin>>n1>>n2;
    if(n1<n2){
    for(int i=1;i<=n1;i++)
    {
        if(n1%i==0 && n2%i==0)
        {   
            save1=i;
        }

    }
    }
    else{
        for(int i=1;i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {   
            save1=i;
        }

    }
    } 

    cout <<"The Greatest GCD is :"<<save1<<endl;
    

}
