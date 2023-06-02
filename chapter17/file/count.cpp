#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) // a.out t1 t2 t3
{
    if (argc == 1)
    {
        cout << "Usage: " << argv[0] << " filename(s)" << endl;
        exit(0);
    }

    long count;
    long total = 0;
    char ch;

    ifstream fin;
    for (int i = 1; i < argc; i++)
    {
        fin.open(argv[i]);
        if (!fin.is_open())
        {
            cout << "Can't open " << argv[i] << endl;
            fin.clear();
            continue;
        }

        count = 0;
        while (fin.get(ch))
            count++;
        cout << count << " characters in " << argv[i] << endl;
        total += count;
        fin.clear();
        fin.close();
    }

    cout << total << " characters in all files." << endl;

    return 0;
}