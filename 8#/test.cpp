#include <iostream>

using namespace std;

int main()
{
    // a -> 左值, 10 -> 右值
    int a = 10;
    int b = 20;

    // 表达式 a + b为右值
    int c = a + b;
    //左值：可被引用的数据对象，例如：变量、数组元素、结构成员、引用和解除引用的指针。非左值：字面常量和包含多项的表达式
    //简单的判断方法：能取地址的是左值，不能取地址的是右值

    // 临时变量
    const int &d = 10;
    const int &e = a + b;

    // 右值引用
    int &&f = 10;
    int &&y = a + b;

    return 0;
}