//21.Create a program to check if a number is an Armstrong number.

#include <iostream>
using namespace std;
int main (){
    int num,temp,a,b,c,armstrong;
    cout <<"enter three digit number we will find is it armstrong number or not:"<<endl;
    cin >>num;
    if(num<100 || num>999){
        cout <<"please enter three digit number"<<endl;
        return 0;
    }
    a=num%10;
    temp=num/10;
    b=temp%10;
    temp=temp/10;
    c=temp%10;
    armstrong=(a*a*a)+(b*b*b)+(c*c*c);
    
        if (num==armstrong){
                cout<<"number is armstrong"<<endl;

        }
        else {
                cout <<"number is not armstrong"<<endl;

        }


}