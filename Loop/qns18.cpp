//18.Create a program to check if a number is a palindrome using a loop.
#include<iostream>
using namespace std;
int main (){
    int num,rev=0;
    cout <<"enter the number for which you want to cheak palindrome :"<<endl;
    cin>>num;
    while(num!=0)
    {   rev=rev*10+num%10;
        num=num/10;
    }
    if(rev==num)
    {
        cout <<"Number is Palindrome!"<<endl;
    }
    else{
        cout <<"Number is not palindrome! "<<endl;
    }

}
