//15.Write a program that suggests a color based on user mood input by using switch. 
#include<iostream>
using namespace std;
int main()
{
    char mood;
    cout<<"Enter your mood (H for Happy, S for Sad, A for Angry, C for Calm): ";
    cin>>mood;
    switch(mood)
    {
        case 'H':
            cout<<"You are Happy, so you should wear Yellow color."<<endl;
            break;
        case 'S':
            cout<<"You are Sad, so you should wear Blue color."<<endl;
            break;
        case 'A':
            cout<<"You are Angry, so you should wear Red color."<<endl;
            break;
        case 'C':
            cout<<"You are Calm, so you should wear Green color."<<endl;
            break;
        default:
            cout<<"Invalid Input."<<endl;
    }
    return 0;
}

