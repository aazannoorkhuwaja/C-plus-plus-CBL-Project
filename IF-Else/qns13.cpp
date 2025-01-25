//13.Write a program that prints a message based on the user's age (child, teenager,adult)
#include <iostream>
using namespace std;
int main ()
{
    int age ;
    cout <<"enter your age: "<<endl;
    cin >>age;

    if(age<=0){ 
        cout <<"this age is not possible according to our record:"<<endl;
        }
        else if(age<=10){
            cout <<"Child age:"<<age<<endl;
        }
        else if(age>10 && age <= 20){
            cout <<"teenager age:"<<age<<endl;
        }
        else if (age>20 && age<=100){
            cout <<"Adult age :"<<age<<endl;

        }
        else{
            cout <<"this age is not possible according to our record:"<<endl;
        }
    return 0; 
}