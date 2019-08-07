//
//  Auxil.h
//  Budgetexe
//
//  Created by 盐城孟 on 8/6/19.
//  Copyright © 2019 盐城孟. All rights reserved.
//

#ifndef Auxil_h
#define Auxil_h
class Budget;

class AuxiliaryOffice
{
private:
    double auxBudget;
public:
    AuxiliaryOffice()
    { auxBudget = 0;}
    
    double getDivisionBudget()const
    {return auxBudget; }
    
    void addBudget(double, Budget&);
};

#endif /* Auxil_h */
