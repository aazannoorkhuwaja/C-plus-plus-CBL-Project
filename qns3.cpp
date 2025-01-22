//3. Create a program to find the largest of three numbers.
#include <iostream>
using namespace std;
int main() {
 int n1,n2,n3;
cout<<"Enter three numbers: ";
cin>>n1>>n2>>n3;
if(n1>n2 && n1>n3)
{
    cout<<n1<<" is the largest number";
}
else if(n2>n1 && n2>n3)
{
    cout<<n2<<" is the largest number";
}
else
{
    cout<<n3<<" is the largest number";
}

    return 0;
}