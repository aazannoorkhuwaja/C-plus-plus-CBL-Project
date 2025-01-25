//15.Write a program that displays the corresponding month name based on a number (1-12)
#include <iostream>
using namespace std;
int main ()
{
    int month;
    cout<<"Enter number from 1 to 12 i will show you its month name:"<<endl;
    cin >>month;
    if (month==1){
        cout <<"January"<<endl;
    }
    else if (month==2){
        cout <<"Feb"<<endl;
    }
    else if (month==3){
        cout <<"march"<<endl;
    }
     else if (month==4){
        cout <<"april"<<endl;
    }
    else if (month==5){
        cout <<"may"<<endl;
    }
     else if (month==6){
        cout <<"june"<<endl;
    }
    else if (month==7){
        cout <<"july"<<endl;
    }
     else if (month==8){
        cout <<"august"<<endl;
    }
    else if (month==9){
        cout <<"sept"<<endl;
    }
     else if (month==10){
        cout <<"oct"<<endl;
    }
    else if (month==11){
        cout <<"nov"<<endl;
    }
     else if (month==12){
        cout <<"dec"<<endl;
    }
    else{
        cout <<"Number not valid try agaiin between 1-12"<<endl;
    }

}