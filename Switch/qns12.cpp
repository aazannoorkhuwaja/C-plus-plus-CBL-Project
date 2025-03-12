//12.Create a program that tells you if you need to carry an umbrella based on weather condition codes. 
#include<iostream>
using namespace std;
int main()
{
  cout << "Can you tell us how is weather!\n1.Rainy\n2.sunny\n3.cloudy\n4.HOt weather\n5.Thunderstorm";
  int nm;
    cin>>nm;
    switch(nm){
        case 1:
        {
            cout <<"You should go witch umbrella";
        }
        break;
        case 2:
        {
            cout<<"Then there is no need for umbrella!";
        }
        break;
        case 3:
        {
            cout <<"Enjoy the weather if its pleasent";
        }
        break;
        case 4:
        {
            cout <<"Then go with umbrella to protect from sun! ";

        }
        break;
        case 5:
        {
            cout <<"As a suggestion go with umbrella it will be positive in any condition";
        }
        break;
        default:
        {
            cout<<"first tell us weather ! other wise invalid" ;
            break;
        }
    }
    return 0;
}