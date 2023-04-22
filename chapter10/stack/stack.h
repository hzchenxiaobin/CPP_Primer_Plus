#ifndef __STACK_H__
#define ___STACK_H__

typedef unsigned long Item;

class stack
{
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    stack();
    ~stack();
};



#endif