#ifndef __TV_H__
#define __TV_H__

#include <iostream>

using namespace std;

class Tv
{
private:
    enum
    {
        off,
        on
    };
    enum
    {
        MinVol,
        MaxVol = 20
    };
    enum
    {
        MinChan = 1,
        MaxChan = 100
    };
    enum
    {
        TV,
        DVD
    };

    int state;
    int volume;
    int channel;
    int input;

public:
    Tv(int s = off) : state(s), volume(5), channel(2), input(TV) {}
    void onoff() { state = (state == on) ? off : on; }
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_input() { input = (input == TV) ? DVD : TV; }
    void show_settings() const;

    friend class Remote;
};

class Remote
{
private:
    int mode;

public:
    Remote(int m = Tv::TV) : mode(m) {}
    void onoff(Tv &tv) { return tv.onoff(); }
    bool volup(Tv &t) { return t.volup(); }
    bool voldown(Tv &t) { return t.voldown(); }
    void chanup(Tv &t) { t.chanup(); }
    void chandown(Tv &t) { t.chandown(); }
    void set_channel(Tv &t, int c) { t.channel = c; }
    void set_input(Tv &t) { t.set_input(); }
};

#endif