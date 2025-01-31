//28.Write a program that checks whether a character is a special character.
#include<iostream>
using namespace std;
int main ()
{
char ch;
cout <<"enter any specail character! :"<<endl;
cin>>ch;
if (ch>32 && ch<48 || ch > 57 &&  ch<65 || ch >90 && ch<97 || ch >122 && ch <127 ){
   cout <<"Character is special"<<endl;
}
else {
    cout <<"Character is not special"<<endl;
}

return 0;

}