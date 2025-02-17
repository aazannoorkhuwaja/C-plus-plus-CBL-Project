//8. Create a program to count occurrences of a specific element in an array. 
#include <iostream>
using namespace std;
int main ()
{
    int size=5,arr[size]={1,1,2,3,2},count=0;
    for (int i=0;i<size;i++)
    {
       for (int j=0;j<size;j++)
            {
                if(i!=j){
                if(arr[i]==arr[j])
                {
                    count++;
                }
                    }
                
            }
    }

        cout <<"The Number Occured: "<<count <<endl;
    return 0;
}
