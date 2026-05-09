#include <iostream>

using namespace std;


// parent class
class player
{
public:
    string name;
    int runs;

    void set_name(string n)
    {
        name = n;
    }
    void set_runs(int r)
    {
        runs = r;
    }
};


// child class
class cricketer : public player
{
public:
    string country;
    void setCountry(string s)
    {
        country = s;
    }
};

// child class of cricketer class
class batter : public cricketer
{
public:
    int centuries;
    void setCenturies(int c)
    {
        centuries = c;
    }
    void show()
    {
        cout << "name: " << name << endl;
        cout << "runs: " << runs << endl;
        cout << "country: " << country << endl;
        cout << "centuries: " << centuries << endl;
    }
};
int main()
{
    int runs;
    cin >> runs;
    batter c1;
    c1.setCountry("india");
    c1.set_name("virat kohli");
    c1.set_runs(runs);
    c1.setCenturies(43);
    c1.show();
    return 0;
}