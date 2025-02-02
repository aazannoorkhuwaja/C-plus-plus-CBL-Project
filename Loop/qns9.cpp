//9. Write a program that prints the multiplication table of a given number.
#include<iostream>
using namespace std;
int main (){
   int num,multiple,limit;
   cout<<"Enter number whose multiples do you want : ";
   cin>>num;
   cout<<"And input limit upto which you want multiples : ";
   cin>>limit;
   for(int i=1;i<=limit;i++)
   {
    cout <<num<<" x "<<i<<" = "<<num*i<<endl;
   }
   return 0;
}