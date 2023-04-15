#include <iostream>
#include <string>

using namespace std;

struct free_throws
{
    string name;
    int made;
    int attemps;
    float percent;
};

void set_pc(free_throws &ft);
void display(const free_throws &ft);
free_throws & accumulate(free_throws & target, const free_throws & source);

int main()
{
    free_throws one = {"Ifelsa Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three = {"Minnie Max", 7, 9};
    free_throws four = {"Whily Looper", 5, 9};
    free_throws five = {"Long Long", 6, 14};
    free_throws team = {"Throwgoods", 0, 0};

    set_pc(one);
    display(one);

    accumulate(team, one);
    display(team);

    display(accumulate(team, two));

    accumulate(accumulate(team, three), four);
    display(team);

    free_throws dup;
    dup = accumulate(team, five);
    cout << "Displaying team:\n";
    display(team);

    cout << "Displaying dup after assignment:\n";
    display(dup);
    set_pc(four);

    accumulate(dup, five) = four;
    cout << "Displaying dup after ill-advised assignment:\n";
    display(dup);

    return 0;
}

void display(const free_throws &ft)
{
    cout << "Name: " << ft.name << endl;
    cout << " Made: " << ft.made << '\t';
    cout << "Attempts: " << ft.attemps << '\t';
    cout << "Percent: " << ft.percent << '\n';

}

void set_pc(free_throws &ft)
{
    if(ft.attemps != 0)
        ft.percent = 100.0f * float(ft.made) / float(ft.attemps);
    else
        ft.percent = 0;
}

free_throws & accumulate(free_throws & target, const free_throws & source)
{
    target.attemps += source.attemps;
    target.made += source.made;
    set_pc(target);
    return target;
}