//
//  Account.cpp
//  Account
//
//  Created by 盐城孟 on 8/4/19.
//  Copyright © 2019 盐城孟. All rights reserved.
//

#include "Account.h"

bool Account::withdraw(double w)
{
    if (balance < w)
        return false; // Not enough in the account
    else
    {
        balance -= w;
        return true;
    }
}

