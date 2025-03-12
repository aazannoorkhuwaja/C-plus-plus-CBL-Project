//14.Create a program to find the maximum of three numbers using switch case. 
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter three numbers";
    cin>>n1>>n2>>n3;
    switch(n1>n2)
    {
        case 1:
        {
            switch(n1>n3)
            {
                case 1:
                {
                    cout<<"Number: "<<n1<<" is greater than the remaining two numbers";
                }
                break;
                case 0:
                {
                    cout<<"Number: "<<n3<<" is the greatest number";
                }
                break;
                default:
                cout<<"The numbers may be equal or not valid";
                break;
            }
        }
        case 0:
        {
            switch(n2>n3)
            {
                case 1:
                {
                    cout<<"Number: "<<n2<<" is greater than the remaining two numbers";
                }
                break;
                case 0:
                {
                    cout<<"Number: "<<n3<<" is the greatest number";
                }
                break;
                default:
                cout<<"The numbers may be equal or not valid";
                break;
            }

        }
    }
    return 0;
}
