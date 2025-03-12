//11. Write a program to display the corresponding food item based on number input. 
#include<iostream>
using namespace std;
int main()
{
    int nm;
    cout<<"Choose the food item! from(1 to 10) \n1.Apple\n2.Banana\n3.Chicken\n4.Pizza\n5.Pasta\n6.Salmon\n7.Broccoli\n8.Rice\n9.Eggs\n10.Bread"<<endl;
    cin>>nm;
    switch (nm)
    {
    case 1:
        {
            cout<<"Apple"<<endl;
        }
        break;
    case 2:
        {
            cout<<"Banana"<<endl;
        }
        break;
    case 3:
        {
            cout<<"Chicken"<<endl;
        }
        break;
    case 4:
        {
            cout<<"Pizza"<<endl;
        }
        break;
    case 5:
        {
            cout<<"Pasta"<<endl;
        }
        break;
    case 6:
        {
            cout<<"Salmon"<<endl;
        }
        break;
    case 7:
        {
            cout<<"Broccoli"<<endl;
        }
        break;
    case 8:
        {
            cout<<"Rice"<<endl;
        }
        break;
    case 9:
        {
            cout<<"Eggs"<<endl;
        }
        break;
    case 10:
        {
            cout<<"Bread"<<endl;
        }
        break;
    default:
        cout<<"Invalid Input"<<endl;
        break;
    }


return 0;
}