//22.Create a program that checks whether the user input is a valid command. 
#include<iostream>
using namespace std;
int main()
{
    char command;
    cout<<"Enter a command:(r=run,s=stop,w=wake) other than these commands not valid! "<<endl;
    cin>>command;
   switch(command){
         case 'r':
         {
              cout<<"The command is run";
              break;
         }
         case 's':
         {
              cout<<"The command is stop";
              break;
         }
         case 'w':
         {
              cout<<"The command is wake";
              break; 
         }
         default:
         {
              cout<<"The command is not valid";
              break;
         }
   }

    return 0;
}