//
//  main.cpp
//  Budgetexe
//
//  Created by 盐城孟 on 8/6/19.
//  Copyright © 2019 盐城孟. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "Budget.h"
using namespace std;

int main() {
    // insert code here...
    int count;
    double mainofficeRequest;
    const int NUM_DIVISION = 4;
    cout << "Enter the main office's budget request: ";
    cin >> mainofficeRequest;
    Budget::mainOffice(mainofficeRequest);
    
    Budget division[NUM_DIVISION];
    AuxiliaryOffice auxOffice[4];
    for(count = 0; count < NUM_DIVISION; count++)
    {
        double BudgetAmount;
        
        cout << "Enter the budget request for division " << (count + 1) << ": ";
        cin >> BudgetAmount;
        division[count].addBudget(BudgetAmount);
        
        cout << "Enter the budget request for that division's auxiliary office: ";
        cin >> BudgetAmount;
        auxOffice[count].addBudget(BudgetAmount, division[count]);
    }
    cout << fixed << showpoint <<setprecision(2);
    cout << "Here are the budget request of each division: " << endl;
    for(count = 0; count < NUM_DIVISION; count++)
    {
        cout <<"\tDivision: " << (count + 1) << "\t$ ";
        cout << division[count].getDivisionBudget() << endl;
        cout << "\tAuxiliary office: " << (count + 1) << "\t$ ";
        cout << auxOffice[count].getDivisionBudget() << endl << endl;
    }
    cout << "The total budget request: \t$ ";
    cout << division[0].getCorpBudget() << endl;
    
    return 0;
}
