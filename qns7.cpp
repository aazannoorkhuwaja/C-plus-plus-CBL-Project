//7. Write a program that checks if a triangle is valid based on its sides.
#include <iostream>
using namespace std;
int main(){
    cout <<"Input the three sides of triangle : "<<endl;
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
   if (s1 > 0 && s2 > 0 && s3 > 0 && s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2)
    {
        cout <<"Triangle is Valid "<<endl;
    }
    else{
         cout <<"Triangle is not Valid "<<endl;
    }
return 0;
}