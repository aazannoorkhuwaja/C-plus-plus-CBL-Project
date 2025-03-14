//19.Write a program to display the suitable dress code based on weather conditions. 
#include<iostream>
using namespace std;
int main() {
int num;
cout<<"Enter the weather condition in celcius"<<endl;
cin>>num;
switch(num>0)
{
    case 1:
    {
        if(num>0 && num<10){
            cout <<"Wear a jacket!";
        }
        else if(num>10 && num<20)
        {
            cout<<"Wear a sweater!";
        }
        else if(num>20 && num<30)
        {
            cout<<"Wear a t-shirt!";
        }
        else{
            cout <<"Wear a shorts!";
        }
    }
    case 0:
    {
        cout <<"The weather condition is not valid";
    }
} 
return 0;
}