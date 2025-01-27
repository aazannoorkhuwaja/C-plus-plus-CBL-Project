//22.Write a program that gives a feedback score based on user rating (1-5).
#include <iostream>
using namespace std;
int main()
{
    int score;
    cout<<"Enter your score from 1-5"<<endl;
    cin>>score;
    if(score>0 && score <6)
    {
        if (score==1){
        cout <<"Not Good!"<<endl;
        }
        else if (score == 2){
            cout <<"good! "<<endl;
        }
        else if(score == 3){
            cout<<"Better!"<<endl;
        }
         else if(score == 4){
            cout<<"Best!"<<endl;
        }
         else if(score == 5){
            cout<<"Excellent!"<<endl;
        }
    }
    else{
        cout <<"Score not valid score can be from 1 - 5"<<endl;
    }
    return 0;
}