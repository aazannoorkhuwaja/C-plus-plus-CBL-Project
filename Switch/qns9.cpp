//9. Write a program that displays the appropriate action based on a user command. 9. Write a program that displays the appropriate action based on a user command. 
#include<iostream>
using namespace std;
int main(){
    int n,initial_money=5000,deposit;
    cout<<"Welcome to the Meezan Bank\nChoose:\n1.Withdraw\n2.deposit\n3.cheak balance before withdaw\nexit"<<endl;
    cin>>n;
    switch(n){
        case 1:
        {
            int mon;
            cout <<"enter the amount to withdraw: ";
            cin>>mon;
            if(mon<0)
            {
                cout <<"Try again ";
                return 0;
            }
            initial_money-=mon;
            cout <<"money remain after withdraw:"<<initial_money<<endl;
            break;
        }
        case 2:
        {
            int after_deposit;
            cout<<"Enter the amount to depost :" ;
            cin>>deposit;
            after_deposit=initial_money+deposit;
            initial_money-=after_deposit;
            cout <<"The Money after deposit are:"<<after_deposit<<endl;
            break;
        }
        case 3:
        {   
            cout <<"The balance is :"<<initial_money;
            break;
        }
        case 4:
        {
            return 0;
            break;
        }
        default:{
        cout <<"Invalid command";
        break;
        }
    }
    return 0;
}