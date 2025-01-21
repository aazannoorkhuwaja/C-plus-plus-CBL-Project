#include <iostream>
using namespace std;
int main(){
cout <<"Enter  Any year : ";
int year;
cin>>year;
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
    cout <<"Its a leap year :";
}
else{
    cout<<"Not a leap year: ";
}
return 0;
}









