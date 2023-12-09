#pragma once
#include "Header.h"
class Error : public std::exception {
public:
    Error(const char* message);
};
