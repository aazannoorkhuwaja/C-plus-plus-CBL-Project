//26.Write a program to determine the grade based on percentage.
#include<iostream>
using namespace std;
int main(){
    int percetage;
    cout<<"Enter your percetage from 1-100 :"<<endl;
    cin>> percetage;
    if (percetage>0 && percetage <=50)
        {
        cout <<"F"<<endl;
        }
        else if  (percetage>50 && percetage <=60){
            cout <<"E+"<<endl;
        }
        else if (percetage>60 && percetage <=70){
            cout<<"D+"<<endl;
        }
         else if (percetage>70 && percetage <=80){
            cout<<"c+"<<endl;
        }
         else if (percetage>80 && percetage <=90){
            cout<<"B+"<<endl;
        }
        else if (percetage>90 && percetage <=100){
            cout<<"A+"<<endl;
        }
    else{
        cout << "percetage not valid percetage can be from 1 - 100"<<endl;
    }
    return 0;
}













