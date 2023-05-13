#include <iostream>

using namespace std;

template <class T>
class beta
{
private:
    template <class V>
    class hold
    {
    private:
        V val;

    public:
        hold(V v = 0) : val(v) {}
        void show() const { cout << val << endl; }
        V Value() const { return val; }
    };

    hold<T> q;
    hold<int> n;

public:
    beta(T t, int i) : q(t), n(i) {}
    void Show() const
    {
        q.show();
        n.show();
    }
    template <class U>
    U blab(U u, T t) { return (n.Value() + q.Value()) * u / t; }
};

int main()
{
    beta<double> guy(3.5, 3);
    cout << "T was set to double." << endl;
    guy.Show();
    cout << "V was set to T, which is double, then V was set to int" << endl;

    cout << guy.blab(10, 2.3) << endl;
    cout << "U was set to int" << endl;

    cout << guy.blab(10.0, 2.3) << endl;
    cout << "U was set to double" << endl;

    cout << "Done!" << endl;

    return 0;
}