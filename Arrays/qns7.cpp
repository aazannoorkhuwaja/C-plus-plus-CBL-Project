//7. Write a program that removes duplicates from an array. 
#include <iostream>
using namespace std;
int main ()
{
    int size=5,arr[size]={1,1,2,3,2};
    for (int i=0;i<size;i++)
    {
       for (int j=0;j<size;j++)
            {
                if(i!=j){
                if(arr[i]==arr[j])
                {
                    arr[j]=0;
                }
                    }
                
            }
    }

        for (int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
    return 0;
}
