//29.Write a program that generates random numbers and prints them until a certain number is reached.
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout <<"enter number upto which you want random number:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Rand number is: "<<rand()%n<<endl;
    }
return 0;
}
