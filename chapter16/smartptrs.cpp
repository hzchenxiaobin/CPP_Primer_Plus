#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Report
{
private:
    string str;

public:
    Report(string s) : str(s) { cout << "Object created" << endl; }
    ~Report() { cout << "Object deleted" << endl; }
    void comment() const { cout << str << endl; }
};

int main()
{
    {
        auto_ptr<Report> ps(new Report("using auto_ptr"));
        ps->comment();
    }

    {
        shared_ptr<Report> ps(new Report("using auto_ptr"));
        ps->comment();
    }
    {
        unique_ptr<Report> ps(new Report("using auto_ptr"));
        ps->comment();
    }
}