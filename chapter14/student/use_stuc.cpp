#include <iostream>
#include "studentc.h"

using namespace std;

void set(Student &stu, int n);
const int pupils = 3;
const int quizzes = 5;

int main()
{
    Student ada[pupils] = {Student(quizzes), Student(quizzes), Student(quizzes)};

    int i;
    for (int i = 0; i < pupils; i++)
        set(ada[i], quizzes);
    cout << "\nStudent List: " << endl;
    for (int i = 0; i < pupils; i++)
        cout << ada[i].Name() << endl;
    cout << "\n Results: ";
    for (int i = 0; i < pupils; i++)
    {
        cout << endl
             << ada[i];
        cout << "average: " << ada[i].Average() << endl;
    }

    cout << "Done.\n";

    return 0;
}

void set(Student &stu, int n)
{
    cout << "Please enter the student's name: ";
    getline(cin, stu);
    cout << "Please enter " << n << " quiz scores:\n";
    for (int i = 0; i < n; i++)
        cin >> stu[i];
    while (cin.get() != '\n')
        continue;
}