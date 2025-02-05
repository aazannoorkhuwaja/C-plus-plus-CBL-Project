//17.Write a program that counts the frequency of digits in a number.
#include <iostream>
using namespace std;
int main ()
{
    int num,digit;
    double fre_of_dig=0;
    cout <<"enter your number:"<<endl;
    cin>>num;
    while(num!=0)
    {
      
        num=num/10;
        fre_of_dig++;

    }
    cout <<"number of digits freqeuncy is :"<<fre_of_dig<<endl;
    
    
}