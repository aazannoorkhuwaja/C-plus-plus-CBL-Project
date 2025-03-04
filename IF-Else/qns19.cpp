//19.Create a program to determine if a given date is valid. 
#include <iostream>
using namespace std;
int main()
{
    int day, month, year;
    cout << "Enter date in format date/month/year: " << endl;
    cin >> day >> month >> year;
    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
        cout << "Date Not valid!" << endl;
    } 
    else {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            cout << "Date is valid!" << endl;
        } 
        else if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                if (day <= 29)
                    cout << "Date is valid within leap year!" << endl;
                else
                    cout << "Date Not valid!" << endl;
            } 
            else {
                if (day <= 28)
                    cout << "Date is valid!" << endl;
                else
                    cout << "Date Not valid!" << endl;
            }
        }
        else {
            if (day <= 30)
                cout << "Date is valid!" << endl;
            else
                cout << "Date Not valid!" << endl;
        }
    }
    return 0;
}
