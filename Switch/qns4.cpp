//4. Create a program to calculate the area of different shapes (circle, square, triangle). 
#include <iostream>
using namespace std;
int main(){
    int choose;
    cout <<"choose \n1.area of circle\n 2.area of square\n 3.area of triangle ";
    cin >>choose;
    switch(choose)
    {
        case 1:
        {
            float r,pi=3.142,a_c;
            cout <<"Enter the radius of circle"<<endl;
            cin>>r;
            a_c=pi*r*r;
            cout <<"the area of circle is: "<<a_c;
            break;
        }
        case 2:
        {
            float s1,a_s;
            cout <<"Enter the side of circle"<<endl;
            cin>>s1;
            a_s=s1*s1;
            cout <<"the area of square is: "<<a_s<<endl;
            break;

        }
        case 3:
        {
            float half=0.5,base,height,a_t;
            cout <<"Enter the base of triangle"<<endl;
            cin>>base;
            cout <<"Enter the height of triangle"<<endl;
            cin>>height;
            a_t=half*base*height;
            cout <<"the area of triangle is: "<<a_t<<endl;
            break;

        }
        default :
        cout <<"Not Valid";
    }
    return 0;

}