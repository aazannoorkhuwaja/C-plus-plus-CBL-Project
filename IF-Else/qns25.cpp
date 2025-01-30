//25.Create a program to find out if a number is a perfect square.
#include <iostream>
using namespace std;
int main(){
    int num,multiple;
    cout <<"Enter your number : "<<endl;
    cin>>num;
    bool per_sq=false;
    for(int i=1;i * i <= num;i++){
        if(i*i==num){
            cout <<"Number :"<<num<<" Of "<<i<<endl;
            per_sq=true;
            break;
        }
       
    }
    if(!per_sq){
            cout<<"No any perfect square of given number"<<endl;
            
        }
    return 0;
}