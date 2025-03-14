//23.Write a program that generates a message based on user input regarding preferences. 
#include<iostream>
using namespace std;
int main() {
int num;
cout<<"Enter your preference:\n1.breakfast\n2.bath\n3.exercise\n4.sleep"<<endl;
cin>>num;
switch(num)
{
    case 1:
    {
        cout <<"You have selected breakfast!";
        break;
    }
    case 2:
    {
        cout <<"You have selected bath!";
        break;
    }
    case 3:
    {
        cout <<"You have selected exercise!";
        break;
    }
    case 4:
    {
        cout <<"You have selected sleep!";
        break;
    }
    default:
    {
        cout << "preference! not valid!";
    }
}
return 0;
}