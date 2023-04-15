#include <iostream>

using namespace std;

double pam(int lns);
void estimate(int lines, double (*pf)(int));
double besty(int lns);

int main()
{
    int code;

    cout << "How many lines of code do you need? ";
    cin >> code;
    cout << "Here is Besty's estimate:" << endl;
    estimate(code, besty);
    cout << "Here is Pam's estimate:" << endl;
    estimate(code, pam);
}

double besty(int lns)
{
    return 0.05 * lns;
}

double pam(int lns)
{
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hour(s)\n";
}