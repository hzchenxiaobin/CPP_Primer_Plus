#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

typedef int KeyType;
typedef pair<const KeyType, string> Pair;
typedef multimap<KeyType, string> MapCode;

int main()
{
    MapCode codes;
    codes.insert(Pair(415, "San Francisco"));
    codes.insert(Pair(510, "Oakland"));
    codes.insert(Pair(718, "Brooklyn"));
    codes.insert(Pair(718, "Staten, Island"));
    codes.insert(Pair(415, "San Rafael"));
    codes.insert(Pair(510, "Berkeley"));

    cout << "Number of cities with area code 415: " << codes.count(415) << endl;
    MapCode::iterator it;
    cout << "Area code    city" << endl;
    for (it = codes.begin(); it != codes.end(); it++)
        cout << (*it).first << "          " << (*it).second << endl;

    cout << "Cities with area code 718: " << endl;
    pair<MapCode::iterator, MapCode::iterator> range = codes.equal_range(718);
     for (it = range.first; it != range.second; it++)
        cout << (*it).first << "          " << (*it).second << endl;

    return 0;
}