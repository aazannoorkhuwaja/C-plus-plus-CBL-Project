//21.Write  a  program  that outputs  the  result  of  a  basic  mathematical  operation  based  on  user  choice. 
#include<iostream>
using namespace std;
int main() {
int n1,n2;
cout <<"Enter two numbers:";
cin>>n1>>n2;
cout <<"Enter the operation (+,-,/,x) you want to perform:"<<endl;
char op;
switch(op)
{
    case '+':
    {
        cout <<n1+n2;
        break;
    }
    case '-':
    {
        cout <<n1-n2;
        break;
    }
    case '/':
    {
        cout <<n1/n2;
        break;
    }
    case 'x':
    {
        cout <<n1*n2;
        break;
    }
    default:
    {
        cout <<"not valid operation";
    }
}
return 0;
}