#include <iostream>
using namespace std;
int main()
{
    int n;
   cout <<"enter number for which operation you want to do:\n1.Meters to Feet\n2.Feet to Meters\n3.Kilometers to Miles\n4.Miles to Kilometers\n5.Inches to Centimeters\n6.Centimeters to Inches"<<endl;
   cin>>n;
   switch(n)
   {    
    case 1:
    {
        float ft,m;
        cout <<"Enter meters!"<<endl;
        cin>>m;
        ft=m*3.28084;//as 1ft = 3.280484
        cout <<"The meters in feet are:"<<ft<<endl;
        break;
    } 
    case 2:
    {
        float ft,m;
        cout <<"Enter feet!"<<endl;
        cin>>ft;
        m=ft*0.3048;
        cout <<"The feet into meters are:"<<m<<endl;
        break;
    }
    case 3:
    {
        float km,m;
        cout <<"Enter Kilometers!"<<endl;
        cin>>km;
        m=km*0.621371;
        cout <<"The km into miles are:"<<m<<endl;
        break;

    }
    case 4:
    {
        float km,m;
        cout <<"Enter Miles!"<<endl;
        cin>>m;
        km=m*1.60934;
        cout <<"The Miles into km are:"<<km<<endl;
        break;

    }
    case 5:
    {  
        float inches,cm;
        cout <<"Enter Inches!"<<endl;
        cin>>inches;
        cm=inches*2.54;
        cout <<"The Inches to centimeters are:"<<cm<<endl;
        break;

    }
    case 6:
    {
        float inches,cm;
        cout <<"Enter Centimeters!"<<endl;
        cin>>cm;
        inches=cm*0.393701;
        cout <<"The centimeters to inches are:"<<inches<<endl; 
        break;
    }
    default:
    {
        cout<<"The invalid input "<<endl;
        break;
    }
    
    }
}