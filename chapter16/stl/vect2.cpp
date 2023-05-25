#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Review
{
    string title;
    int rating;
};

bool FillReview(Review &r);
void ShowReview(const Review &r);

int main()
{
    vector<Review> books;
    Review temp;
    while (FillReview(temp))
        books.push_back(temp);

    int num = books.size();
    if (num > 0)
    {
        cout << "You entered the following: " << endl;
        for (int i = 0; i < num; i++)
            ShowReview(books[i]);
        cout << "Reprising: " << endl;
        vector<Review>::iterator pr;
        pr = books.begin();
        for (pr = books.begin(); pr != books.end(); pr++)
            ShowReview(*pr);

        vector<Review> oldlist(books);
        if (num > 3)
        {
            books.erase(books.begin() + 1, books.begin() + 3);
            cout << "After erasing: " << endl;
            for (pr = books.begin(); pr != books.end(); pr++)
                ShowReview(*pr);

            books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
            cout << "After inserting: " << endl;
            for (pr = books.begin(); pr != books.end(); pr++)
                ShowReview(*pr);
        }

        books.swap(oldlist);
        cout << "After swaping: " << endl;
        for (pr = books.begin(); pr != books.end(); pr++)
            ShowReview(*pr);
    }

    return 0;
}

bool FillReview(Review &r)
{
    cout << "Enter book title, (enter quit to quit):";
    getline(cin, r.title);
    if (r.title == "quit")
        return false;
    cout << "Enter book rating: " << endl;
    cin >> r.rating;
    if (!cin)
        return false;

    while (cin.get() != '\n')
        ;

    return true;
}

void ShowReview(const Review &r)
{
    cout << r.rating << "\t" << r.title << endl;
}