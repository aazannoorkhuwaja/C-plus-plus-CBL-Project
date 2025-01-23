/*Write a program that accepts a grade (A, B, C, D, F) and prints the corresponding message*/
#include <iostream>
using namespace std;
int main() {
    cout <<"Welcome to Grading system"<<endl;
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    if(marks>=90)
    {
        cout<<"Grade A";
    }
    else if(marks>=80)
    {
        cout<<"Grade B";
    }
    else if(marks>=70)
    {
        cout<<"Grade C";
    }
    else if(marks>=60)
    {
        cout<<"Grade D";
    }
    else if(marks>=50)
    {
        cout<<"Grade E";
    }
    else
    {
        cout<<"Grade F";
    }
    return 0;
}