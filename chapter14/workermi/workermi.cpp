#include "workermi.h"

void Worker::Get()
{
    cout << "Enter worker's fullname: ";
    getline(cin, fullname);
    cout << "Enter worker's ID: ";
    cin >> id;
    while (cin.get() != '\n')
        ;
}

void Worker::Data() const
{
    cout << "Name: " << fullname << endl;
    cout << "Employee ID: " << id << endl;
}

void Waiter::Get()
{
    cout << "Enter waiter's panache rating: ";
    cin >> panache;
    while (cin.get() != '\n')
        ;
}

void Waiter::Set()
{
    Worker::Get();
    Get();
}

void Waiter::Show() const
{
    Worker::Data();
    Data();
}

void Waiter::Data() const
{
    cout << "Panache rating: " << panache << endl;
}

char *Singer::pv[] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Get()
{
    cout << "Enter number for singer's vocal range:\n";
    int i;
    for (int i = 0; i < Vtypes; i++)
    {
        cout << i << ":" << pv[i] << " ";
        if (i % 4 == 3)
            cout << endl;
    }
    if (i % 4 != 0)
        cout << endl;
    while (cin >> voice && (voice < 0 || voice >= Vtypes))
        cout << "Please enter a value >= 0 and < " << Vtypes << endl;
    while (cin.get() != '\n')
        ;
}

void Singer::Data() const
{
    cout << "Voice range: " << pv[voice] << endl;
}

void Singer::Set()
{
    Worker::Get();
    Get();
}

void Singer::Show() const
{
    Worker::Data();
    Data();
}

void SingingWaiter::Set()
{
    Worker::Get();
    Waiter::Get();
    Singer::Get();
}

void SingingWaiter::Show() const
{
    Worker::Data();
    Waiter::Data();
    Singer::Data();
}
