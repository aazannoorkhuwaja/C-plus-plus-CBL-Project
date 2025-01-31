//29.Create a program that checks if a person is eligible to vote based on age.
#include<iostream>
using namespace std;
int main(){
    int age;
    cout <<"enter your age"<<endl;
    cin>>age;
    if (age>0 && age<18){
         cout <<"Not valid to vote!"<<endl;
        
    }
    else {
        cout<<"Valid to vote !"<<endl;
    }
    return 0;
}