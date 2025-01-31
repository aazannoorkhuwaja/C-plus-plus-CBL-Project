//1. Write a program to print numbers from 1 to 100.
#include<iostream>
using namespace std;
int main ()
{
    int limit,num=1;
    cout <<"Enter Your Limit upto which you want to print numbers ! "<<endl;
    cin>>limit;
    if(limit>0){
        while (num<=limit)
        {
            cout <<num<<" ";
            num++;

        }
    }
    else{
        cout <<"Limit Is  Not Valid try again !"<<endl;
    }
    return 0;
}