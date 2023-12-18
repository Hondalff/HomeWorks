#pragma once
#include <iostream>
class Figure
{
public:
    virtual void print() = 0;
protected:
    std::string name;
};