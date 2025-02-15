//5. Write a program to determine a student's grade based on marks. 
#include<iostream>
using namespace std;
int main ()
{
    int marks;
    cout<<"Enter the marks of the student: ";
    cin>>marks;
    if (marks>=90)
    {
        cout<<"Grade A";
    }
    else if (marks>=80)
    {
        cout<<"Grade B";
    }
    else if (marks>=70)
    {
        cout<<"Grade C";
    }
    else if (marks>=60)
    {
        cout<<"Grade D";
    }
    else if (marks>=50)
    {
        cout<<"Grade E";
    }
    else
    {
        cout<<"Grade F";
    }
    return 0;
}