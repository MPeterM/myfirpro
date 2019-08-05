//
//  Account.h
//  Account
//
//  Created by 盐城孟 on 8/4/19.
//  Copyright © 2019 盐城孟. All rights reserved.

#ifndef Account_h
#define Account_h
#include<string>
using namespace std;
class Account
{
private:
    double balance;
    string description;
    int day;
    int month;
    int year;
public:
    Account()
    {
        description = "";
        balance = 0.0;
        day = 0;
        month = 0;
        year = 0;
    }
    Account(string desc)
    {
        description = desc;
        balance = 0.0;
        day = 0;
        month = 0;
        year = 0;
    }
    Account(string desc, double bal, int y, int m, int d)
    {
        description = desc;
        balance = bal;
        year = y;
        month = m;
        day = d;
        
    }
    
    void setDescription(string d)
    {
        description = d;
    }
    
    
    void makeDeposit(double dep)
    { balance += dep; }
    
    void setYear(int y)
    {
        year = y;
    }
    
    void setMonth(int m)
    {
        month = m;
    }
    
    void setDay(int d)
    {
        day = d;
    }
    
    int getYear() const { return year; }
    
    int getMonth()const { return month; }
    
    int getDay() const { return day; }
    
    
    bool withdraw(double w);
    
    string getDescription() const
    {return description; }
    
    double getBalance() const
    { return balance; }
    
    
    void show();
    
};

#endif /* Account_h */
