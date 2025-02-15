//10.Create a program that simulates a vending machine. 
#include<iostream>
using namespace std;
int main ()
{
    int  command;
    cout <<"You can stimulate the velding machine by these commands \n1.start\n2.pause\n3.stop\n4.exit";
    switch(command)
    {
        case 1:
        {
            cout <<"Machine started and processing...";
            break;
        }
        case 2:
        {
            cout <<"Machine paused.";
            break;

        }
        case 3:{
            cout <<"Machine Stopped";
            break;
        }
        case 4:{
            cout <<"Exited...";
            break;
        }
        default:
        {
            cout <<"Invalid command";
            break;
        }


    }
}