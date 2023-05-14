#ifndef __TV_H__
#define __TV_H__

#include <iostream>

using namespace std;

class Tv;

class Remote
{
private:
    int mode;

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

public:
    Remote(int m = TV) : mode(m) {}
    void onoff(Tv &tv);
    bool volup(Tv &t);
    bool voldown(Tv &t);
    void chanup(Tv &t);
    void chandown(Tv &t);
    void set_channel(Tv &t, int c);
    void set_input(Tv &t);
};

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

    friend void Remote::set_channel(Tv &t, int c);
};

inline void Remote::onoff(Tv &tv) { return tv.onoff(); }
inline bool Remote::volup(Tv &t) { return t.volup(); }
inline bool Remote::voldown(Tv &t) { return t.voldown(); }
inline void Remote::chanup(Tv &t) { t.chanup(); }
inline void Remote::chandown(Tv &t) { t.chandown(); }
inline void Remote::set_channel(Tv &t, int c) { t.channel = c; }
inline void Remote::set_input(Tv &t) { t.set_input(); }

#endif