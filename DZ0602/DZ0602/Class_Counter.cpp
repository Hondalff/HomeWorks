#include "Header.h"
#include <iostream>


   int Counter::get_count() { return count; }
   int Counter::Add() { return this->count++; }
   int Counter::Divide() { return count--; }
   void Counter::Info() { std::cout << count << std::endl; }
   bool Counter::Exit() { return true; }

    Counter::Counter(int count)
    {
        this->count = count;
    }
