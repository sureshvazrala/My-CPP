#include <iostream>


#pragma once
using namespace std;

class NumberManipulation
{
    public:
    // Variables x and y 
    int m_x;
    int m_y;

    // print method to print x and y
    void print()
    {
       cout<<"Welcome to Number Manipulation print function "<<endl;
       cout << m_x << " " << m_y << endl;
    }
};