//24.Write a program that calculates the tax based on income brackets.
#include<iostream>
using namespace std;
int main(){
    double income,tax,tax_based;
    cout <<"Enter your income:"<<endl;
    cin>>income;
    if(income>0){
        if(income<=10000){
            tax=0.5;
            tax_based = income*tax;
            cout <<"tax which is : 5% Based on income :"<<income<<" And income afetr tax-cut is : "<<income-tax_based<<endl;
            }
        else if(income>10000 && income<=30000)
            {
                tax=0.10;
                tax_based = income*tax;
                cout <<"tax which is : 10% Based on income :"<<income<<" And income afetr tax-cut is : "<<income-tax_based<<endl;
            }
        else if(income>30000 && income<=60000)
            {
                tax=0.15;
                tax_based = income*tax;
                cout <<"tax which is : 15% Based on income :"<<income<<" And income afetr tax-cut is : "<<income-tax_based<<endl;
            }
            
        else if(income>60000 && income<=80000)
            {
                tax=0.20;
                tax_based = income*tax;
                cout <<"tax which is : 20% Based on income :"<<income<<" And income afetr tax-cut is : "<<income-tax_based<<endl;
            }
            
        else if(income>80000 && income<=100000)
            {
                tax=0.25;
                tax_based = income*tax;
                cout <<"tax which is : 25% Based on income :"<<income<<" And income afetr tax-cut is : "<<income-tax_based<<endl;
            }
            
        else if(income>100000)
            {
                tax=0.30;
                tax_based = income*tax;
                cout <<"tax which is : 30% Based on income :"<<income<<" And income afetr tax-cut is : "<<income-tax_based<<endl;
            }
        } 
        else{
            cout << "Income Not valid for tax "<<endl;
        }
    return 0;

} 