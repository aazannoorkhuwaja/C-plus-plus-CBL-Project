//2. Create a program that prints the sum of the first n natural numbers.
#include<iostream>
using namespace std;
int main ()
{
    int limit,num=0,sec=0,sum=0;
    cout <<"Enter Your Limit upto which you want to add numbers ! "<<endl;
    cin>>limit;
    if(limit>0){
        while (num<limit)
        {
            num++;
            sec=num;
            sum=sum+sec;
        }
        cout <<"Sum Of numbers upto (limit) is :"<<sum<<endl;
    }
    else{
        cout <<"Limit Is  Not Valid try again !"<<endl;
    }
    return 0;
}