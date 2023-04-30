#ifndef STRNG_H_
#define STRNG_H_

#include <iostream>

using namespace std;

class String
{
private:
    char *str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;

public:
    String(const char *s);
    String();
    String(const String &s);
    ~String();
    int length() const { return len; }

    String &operator=(const String &st);
    String &operator=(const char *s);
    char &operator[](int i);
    const char &operator[](int i) const;

    friend bool operator<(const String &str1, const String &str2);
    friend bool operator>(const String &str1, const String &str2);
    friend bool operator==(const String &str1, const String &str2);

    friend std::ostream &operator<<(std::ostream &os, const String &st);
    friend std::istream &operator>>(std::istream &os, String &st);

    static int HowMany();
};

#endif