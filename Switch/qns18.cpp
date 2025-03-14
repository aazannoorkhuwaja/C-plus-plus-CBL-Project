//18.Create a program that suggests an activity based on the time of day. 
#include<iostream>
using namespace std;
int main() {
int num;
cout<<"Enter the time of the day:"<<endl;
cin>>num;
switch(num>0){
    case 1:
    {
        if(num>0 && num<12){
            cout <<"Good Morning!";
        }
        else if(num>12 && num<17)
        {
            cout<<"Good Afternoon!";
        }
        else if(num>17 && num<20)
        {
            cout<<"Good Evening!";
        }
        else{
            cout <<"Good Night!";
        }
    }
    case 0:
    {
        cout <<"The time is not valid";
    }
}
}