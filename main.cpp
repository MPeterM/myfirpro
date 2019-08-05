//
//  main.cpp
//  Account
//
//  Created by 盐城孟 on 8/4/19.
//  Copyright © 2019 盐城孟. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>
#include <string>
#include "Account.h"
using namespace std;
void displayMenu();
void makeDeposit(Account &);
void withdraw(Account &);


int main() {
    // insert code here...
    Account saving;
    int y, m, d;
    string des;
    char choice;
    cout << fixed << showpoint << setprecision(2);
    do
    {
        displayMenu();
        cin >> choice;
        if (toupper(choice) == 'B' || toupper(choice) == 'C')
        {
            cout << "Please enter today's date: ";
            cin >> y >> m >> d;
            cout << "Please describe the source/goto of the money: ";
            cin >> des;
            saving.setYear(y);
            saving.setMonth(m);
            saving.setDay(d);
            saving.setDescription(des);
        }
        while (toupper(choice) < 'A' || toupper(choice) > 'D')
        {
            cout << "Please make a choice in the range of A through D!";
            cin >> choice;
        }
    switch(choice)
        {
            case 'a':
            case 'A':
                cout << saving.getYear() << "-" << saving.getMonth() << "-" << saving.getDay() <<"  ";
                cout << "The current balance is ";
                cout << saving.getBalance() << endl;
                break;
            case 'b':
            case 'B':
                cout << saving.getYear() << "-" << saving.getMonth() << "-" << saving.getDay() << "  ";
                makeDeposit (saving);
                cout << "The source of the money: " << saving.getDescription();
                break;
            case 'c':
            case 'C':
                withdraw(saving);
                cout << "The goto of the money: " << saving.getDescription();
                break;
                
        }
    }while(toupper(choice) != 'D');

    return 0;
}

void displayMenu()
{
    cout << "\n             MENU\n";
    cout << "----------------------------------\n";
    cout << "A) Display the account balance\n";
    cout << "B) Make a deposit\n";
    cout << "C) Mkae a withdraw\n";
    cout << "D) Exit the program\n";
    cout << "Enter yout choice: ";
}

void makeDeposit(Account &acc)
{
   
    double dollars;
    cout << "Enter the amount of the deposit: ";
    cin >> dollars;
    cin.ignore();
    acc.makeDeposit(dollars);
}

void withdraw(Account &acc)
{
    double dollars;
    cout << "Enter the amount of the withdrawal: ";
    cin >> dollars;
    if (!acc.withdraw(dollars))
        cout << "ERROR: Withdrawal amount too large.\n\n";
    cin.ignore();
    
}
