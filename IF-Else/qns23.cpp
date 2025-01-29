//23.Create a program that checks if a character is uppercase or lowercase.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter Your Charcter!"<<endl;
    cin>>ch;
    if (ch>96 && ch<123)
    {
        cout <<"The character is lowercase!"<<endl;
    }
    else if(ch>64 && ch <91){
         cout <<"The character is Uppercase!"<<endl;
    }
    else{
        cout <<"Not valid Try Again!"<<endl;
    }
    return 0;
}
