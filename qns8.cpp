//8. Create a program that converts a given temperature from Celsius to Fahrenheit.
#include <iostream>
using namespace std;
int main (){
    cout <<"Give Character Temperature Will Convert that into Fahrenhiet and Kelvin! (f/F and k/K) :"<<endl;
    int temp;
    char ch ;
    cin>>ch;
    cout<<"Enter You Temperature In Celcius: "<<endl; 
    cin>>temp;
    if (ch == 'f' || ch == 'F'){
        temp=(1.8*temp)+32;
        cout<<"Temperature in Fahrenheit is: "<<temp<<endl; 
    }
    else if(ch == 'k' || ch == 'k')
    {
        temp = 273 + temp;
    cout<<"Temperature in Kelvin is: "<<temp<<endl; 
    }
    else{
        cout<<"Not Valid Try again!"<<endl; 
    }

}