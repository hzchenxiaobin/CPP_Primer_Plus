#include <iostream>
#include "queuetp.h"
#include <string>

int main()
{
    Queue<string> cs(5);
    string temp;

    while (!cs.isfull())
    {
        cout << "Please enter client's name, then push to queue: " << endl;
        getline(cin, temp);
        cs.enqueue(temp);
    }

    cout << "The queue is full, Processing begin!" << endl;

    while (!cs.isempty())
    {
        cs.dequeue(temp);
        cout << "Now processing " << temp << "..." << endl;
    }
    return 0;
}