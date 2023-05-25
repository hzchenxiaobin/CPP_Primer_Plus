#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Review
{
    string title;
    int rating;
};

bool FillReview(Review &r);
void ShowReview(const Review &r);
bool worseThan(const Review &r1, const Review &r2);

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
        // for (int i = 0; i < num; i++)
        //     ShowReview(books[i]);
        for_each(books.begin(), books.end(), ShowReview);
        cout << "Reprising: " << endl;
        vector<Review>::iterator pr;
        pr = books.begin();
        // for (pr = books.begin(); pr != books.end(); pr++)
        //     ShowReview(*pr);
        for_each(books.begin(), books.end(), ShowReview);

        vector<Review> oldlist(books);
        if (num > 3)
        {
            books.erase(books.begin() + 1, books.begin() + 3);
            cout << "After erasing: " << endl;
            // for (pr = books.begin(); pr != books.end(); pr++)
            //     ShowReview(*pr);
            for_each(books.begin(), books.end(), ShowReview);

            books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
            cout << "After inserting: " << endl;
            // for (pr = books.begin(); pr != books.end(); pr++)
            //     ShowReview(*pr);
            for_each(books.begin(), books.end(), ShowReview);
        }

        books.swap(oldlist);
        cout << "After swaping: " << endl;
        // for (pr = books.begin(); pr != books.end(); pr++)
        //     ShowReview(*pr);
        for_each(books.begin(), books.end(), ShowReview);

        cout << "After shuffling: " << endl;
        random_shuffle(books.begin(), books.end());
        for_each(books.begin(), books.end(), ShowReview);

        cout << "After sorting1: " << endl;
        sort(books.begin(), books.end());
        for_each(books.begin(), books.end(), ShowReview);

        cout << "After sorting2: " << endl;
        sort(books.begin(), books.end(), worseThan);
        for_each(books.begin(), books.end(), ShowReview);
    }

    return 0;
}

bool worseThan(const Review &r1, const Review &r2)
{
    return r1.rating < r2.rating;
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

bool operator<(const Review &r1, const Review &r2)
{
    if (r1.title < r2.title)
        return true;
    else if (r1.title == r2.title && r1.rating < r2.rating)
        return true;

    return false;
}