#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <ctime>

using namespace std;

const int NUM = 26;
const string wordlist[NUM] = {"apiary", "beetle", "cereal", "danger", "ensign", "florid", "garage", "health", "insult",
                              "jackal", "keeper", "loaner", "manage", "nonce", "onset", "plaid", "quilt",
                              "remote", "stolid", "train", "useful", "valid", "whence", "xenon", "yearn", "zippy"};

int main()
{
    char play;
    srand(time(0));
    cout << "Will you play a word game? <y/n>";
    cin >> play;
    play = tolower(play);

    while (play == 'y')
    {
        string target = wordlist[rand() % NUM];
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        cout << "Guess my secret word, it has " << length << " length letter, and you guess one letter at a time. You get "
             << guesses << " wrong guesses" << endl;
        cout << attempt << endl;
        while (guesses > 0 && attempt != target)
        {
            char letter;
            cout << "Guess a letter: ";
            cin >> letter;
            if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
            {
                cout << "You already guessed that. Try again." << endl;
                continue;
            }

            int loc = target.find(letter);
            if (loc == string::npos)
            {
                cout << "Oh, bad guess!" << endl;
                --guesses;
                badchars += letter;
            }
            else
            {
                cout << "Good guess!" << endl;
                attempt[loc] = letter;
                loc = target.find(letter, loc + 1);
                while (loc != string::npos)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }
            }
            cout << "Your word: " << attempt << endl;
            if (attempt != target)
            {
                if (badchars.length() > 0)
                    cout << "Bad choices: " << badchars << endl;
                cout << guesses << " bad guesses left" << endl;
            }
        }

        if (guesses > 0)
            cout << "That's right!\n";
        else
            cout << "Sorry, the word is " << target << "." << endl;
        cout << "Will you play another? <y/n> ";
        cin >> play;
        play = tolower(play);
    }

    cout << "Bye" << endl;

    return 0;
}