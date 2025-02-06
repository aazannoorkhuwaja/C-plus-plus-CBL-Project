//22.Create a program that sums the squares of the first n natural numbers.
#include <iostream>
using namespace std;
int main()
{
    int n,i=0;
    cout <<"Enter a number upto which you want squares: ";
    cin>>n;

    while(i<=n)
    {
        cout <<"Square of number "<<i<< " is : "<<i*i<<endl;
        i++;
    }
   return 0;
}