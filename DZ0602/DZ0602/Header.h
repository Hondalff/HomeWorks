#pragma once

class Counter
{
private:
    int count = 0;
public:

    int get_count();
    int Add();
    int Divide();
    void Info();
    bool Exit();

    Counter(int count);
};