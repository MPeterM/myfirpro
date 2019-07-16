//
//  stack.h
//  vectot
//
//  Created by 盐城孟 on 7/16/19.
//  Copyright © 2019 盐城孟. All rights reserved.
//

#include<vector>
#include<iostream>

using namespace std;

#ifndef VECTORSTACK
#define VECTORSTACK

template <typename StackElement>
class VectorStack {
public:
    VectorStack()
    {vstack.empty();}
    bool empty()const
    {return vstack.empty();}
    void push(const int &data)
    {vstack.push_back(data);}
    void pop()
    {vstack.pop_back();}
    StackElement top() const
    {return vstack.back();}
    int size()const
    {return vstack.size();}
    void display()const
    {
        for(int p = vstack.size()-1;p>=0;p--)
        {cout<< vstack[p]<<" ";}
        cout<<endl;
    }
private:
    vector<int> vstack;
    
};

#endif /* vectorstack_h */
