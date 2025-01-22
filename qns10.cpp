//10.Create a program that checks if a given string is a palindrome.
#include <iostream>
using namespace std;
int main(){
    string name,other_name;
    cout <<"Enter Your First Name: "<<endl;
    cin>>name;
    cout <<"Enter Your sec-name to compare to find palindrome: "<<endl;
    cin>>other_name;
    bool is=false;
    if(name == other_name)
{
    is==true;
    cout <<"Name is palindrome:"<<endl;
}
else{
    cout <<" Is not palindrome: "<<endl;
}

return 0;


}