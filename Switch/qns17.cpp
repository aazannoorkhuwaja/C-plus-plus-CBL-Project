//17.Write a program to categorize a person based on their height. 
#include<iostream>
using namespace std;
int main() {
int num;
cout<<"Enter your height:"<<endl;
cin>>num;
switch(num>0)
{
    case 1:
    {
        if(num<3){
            cout <<"The person is child!";
        }
        else if(num>3 && num<6)
        {
            cout<<"The person is teenager";
        }
        else if(num>6 && num<10)
        {
            cout<<"The person is adult ";
        }
        else{
            cout <<"The person is adamkhor";
        }
    }
    case 0:
    {
        cout <<"The height is not valid";
    }
}

return 0;
}
