#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 20;

int main() {
    cout << "Enter words (to stop, type the word done): ";
    string str;
    char words[SIZE];
    int count = 0;
    while(strcmp(words, "done") != 0) {
        count++;
        cin >> words;
        cin.get();
    }

    cout << "You entered a total of " << count - 1 << " words." << endl;
    return 0;

}