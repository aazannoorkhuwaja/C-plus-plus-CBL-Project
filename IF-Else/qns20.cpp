//20.Write a program to check if two strings are anagrams.
#include<iostream>
using namespace std;
int main(){
    cout <<"give any two words then the algoritham will confirm are these anagrams or not:"<<endl;
    string one,two;
    cin>>one>>two;
    int length=0,matching=0;

    while(one[length]!='\0')
    {
        length++;
    }

    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length;j++)
        {
            if(one[i]==two[j])
            {
                matching++;
                two[j]='\0';
                break;
            }

        }
    }
        if(length==matching){
            cout<<"words are Anagrams"<<endl;
        }  
        else{
            cout <<"Words are not Anagrams"<<endl;
        }

    return 0;
}