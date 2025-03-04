//4. Write a program to determine if a year is a leap year.
#include <iostream>
using namespace std;
int main(){
cout <<"Enter Any year : ";
int year;
cin>>year;
//  A leap year occurs if:
//  if (
//     Condition 1: The year must be divisible by 4.
//     This accounts for the extra 0.25 days in Earth's orbit.
//     (year % 4 == 0 && 
    
//     Condition 2: The year must NOT be divisible by 100.
//     Years like 1700, 1800, 1900 are NOT leap years because adding a leap year 
//     every 4 years slightly overcompensates for Earth's orbit.
//     year % 100 != 0) || 
    
//     Condition 3: The year must be divisible by 400.
//     This corrects the previous rule, ensuring years like 1600, 2000, 2400 are leap years.
//     (year % 400 == 0)
// ) {
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
    cout <<"Its a leap year :";
}
else{
    cout<<"Not a leap year: ";
}
return 0;
}









