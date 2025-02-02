//8. Create a program that counts the number of digits in a number.
#include<iostream>
using namespace std;
int main(){
int num;
double count=0;
cout <<"Enter number "<<endl;
cin>>num;
while(num!=0){
    num%10;
    num=num/10;
    count++;
}
cout<<"The Digits in number is:"<<count<<endl;

    return 0;
}