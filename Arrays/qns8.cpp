//8. Create a program to count occurrences of a specific element in an array. 
#include <iostream>
using namespace std;
int main ()
{
    
    int size;
    cout<<"How manay numbers you want to input:"<<endl;
    cin>>size;
    int arr[size],number,count=0;
    for(int i=1;i<=size;i++)
    {
        cout <<"Input number :"<<size-i+1<<endl;
        cin>>arr[i];
    }
    cout <<"Choose For which digit you want to cheak its occurencess: \n(1)for first digit \n(2)for 2nd digit in ths way you have to enter:"<<endl;
    cin>>number;

    for(int i=1;i<=size;i++)
    {
        if(arr[number]==arr[i])
        {
            count++;
        }
        
    }
    cout <<"The Digit "<<arr[number]<<" occured "<<count<<" times "<<endl;
    
}
