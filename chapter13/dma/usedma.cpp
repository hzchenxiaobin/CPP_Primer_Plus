#include <iostream>
#include "dma.h"

using namespace std;

int main()
{
    baseDMA shirt("Protabelly", 8);
    cout << "Displaying baseDMA object: " << endl;
    cout << shirt;
    cout << "------------------------" << endl;

    lacksDMA ballon("Blimpo", 4, "red");
    cout << "Displaying lackDMA object: " << endl;
    cout << ballon;
    cout << "------------------------" << endl;

    lacksDMA ballon2(ballon);
    cout << "Result of lacksDMA copy: " << endl;
    cout << ballon2;
    cout << "------------------------" << endl;

    hasDMA map("Keys", 5, "Mercator");
    cout << "Displaying hasDMA object: " << endl;
    cout << map;
    cout << "------------------------" << endl;

    //属于=初始化， 调用复制构造函数
    hasDMA map2 = map;

    //属于赋值，调用赋值运算符
    hasDMA map3;
    map3 = map;

    return 0;
}