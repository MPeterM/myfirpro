//
//  Auxil.cpp
//  Budgetexe
//
//  Created by 盐城孟 on 8/6/19.
//  Copyright © 2019 盐城孟. All rights reserved.
//

#include <stdio.h>
#include "Budget.h"
#include "Auxil.h"

void AuxiliaryOffice::addBudget(double b, Budget &div)
{
    auxBudget += b; 
    div.corpBudget += b;
}
