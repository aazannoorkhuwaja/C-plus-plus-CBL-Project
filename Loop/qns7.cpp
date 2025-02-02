//7. Write a program to find the largest number in a series of inputs.
#include<iostream>
using namespace std;
int main(){
int limit,num,i=0,first,sec,largest;
cout <<" Input Limit Numbers upto which you want to input numbers: ";
cin>>limit;
while(i<limit){
    cin>>num;
    first=num;
    i++;
    sec=num;
    if(sec>first){
        largest=sec;
    }
    else{
        largest=first;
    }
    }
    cout<<"The Largest one in series is :"<<largest<<endl;
    return 0;
}