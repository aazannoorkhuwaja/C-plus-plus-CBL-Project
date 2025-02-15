//1. Write a program to display the day of the week based on a number (1-7).  
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter number :";
    cin>>n;
    switch(n)
    {
        case 1:
        {
            cout <<"Monday";
            break;
        }
        case 2:
        {
            cout <<"Tuesday";
            break;
        }
        case 3:
        {
            cout <<"Wednesday";
            break;
        }
        case 4:
        {
            cout <<"Thursday";
            break;
        }
        case 5:
        {
            cout <<"Friday";
            break;
        }
        case 6:
        {
            cout <<"Saturday";
            break;
        }
        case 7:
        {
            cout <<"Sunday";
            break;
        }
        default:
        cout <<"Not VAlid";
    }
    return 0;
}
       