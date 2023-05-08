#include "studentc.h"

using namespace std;

double Student::Average() const
{
    if (ArrayDb::size() > 0)
        return ArrayDb::sum() / ArrayDb::size();
    return 0;
}

const string &Student::Name() const
{
    return (const string &)*this;
}

double &Student::operator[](int i)
{
    return ArrayDb::operator[](i);
}

double Student::operator[](int i) const
{
    return ArrayDb::operator[](i);
}

istream &operator>>(istream &is, Student &stu)
{
    is >> (string &)stu;
    return is;
}

istream &getline(istream &is, Student &stu)
{
    getline(is, (string &)stu);
    return is;
}

ostream &Student::arr_out(ostream &os) const
{
    int lim = ArrayDb::size();
    if (lim > 0)
    {
        int i;
        for (i = 0; i < lim; i++)
        {
            os << ArrayDb::operator[](i) << " ";
            if (i % 5 == 4)
                os << endl;
        }
        if (i % 5 != 0)
            os << endl;
    }
    else
        os << "Empty array!" << endl;
    return os;
}

ostream &operator<<(ostream &os, const Student &stu)
{
    os << "Scores for " << (string &)stu << ": " << endl;
    stu.arr_out(os);
    return os;
}