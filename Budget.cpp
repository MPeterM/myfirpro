//
//  Budget.cpp
//  Budgetexe
//
//  Created by 盐城孟 on 8/6/19.
//  Copyright © 2019 盐城孟. All rights reserved.
//


#include "Budget.h"
double Budget::corpBudget = 0;
void Budget::mainOffice(double moffice)
{
    corpBudget += moffice;
}
