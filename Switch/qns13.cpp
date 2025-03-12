//13.Write a program to categorize a number (positive, negative, zero) using switch case. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    switch(num>0){
        case 1:
            cout<<"Positive number";
            break;
        case 0:
            switch(num<0){
                case 1:
                    cout<<"Negative number";
                    break;
                case 0:
                    cout<<"Zero";
                    break;
            }
            break;
    }
    
}