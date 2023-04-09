#include <iostream>
#include <string>

using namespace std;
int main() {
    cout << "Enter words (to stop, type the word done): ";
    string str;
    int count = 0;
    while(str != "done") {
        count++;
        getline(cin, str);
        cin.get();
    }

    cout << "You entered a total of " << count - 1 << " words." << endl;
    return 0;

}