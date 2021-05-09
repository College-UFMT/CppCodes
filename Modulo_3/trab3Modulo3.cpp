#include <iostream>

using namespace std;

int getGCD(int a, int b)
{
    if (a == 0)
        return b;

    return getGCD(b % a, a);
}

int getLCM(int a, int b)
{
    return (a / getGCD(a, b)) * b;
}

class Fraction
{
private:
    int num, dem;

public:
    Fraction() : num(0), dem(1){};

    Fraction(int n, int d) : num(n), dem(d)
    {
        if (d == 0)
        {
            num = 0;
            dem = 1;
        }
    };

    friend Fraction operator+(const Fraction &fra1, const Fraction &fra2);
    friend Fraction operator-(const Fraction &fra1, const Fraction &fra2);
    friend Fraction operator*(const Fraction &fra1, const Fraction &fra2);
    friend Fraction operator/(const Fraction &fra1, const Fraction &fra2);

    friend ostream &operator<<(ostream &os, const Fraction &output);
    friend istream &operator>>(istream &is, Fraction &output);
};

Fraction operator+(const Fraction &fra1, const Fraction &fra2)
{
    Fraction result;
    if (fra1.dem == fra2.dem)
    {
        result.num = fra1.num + fra2.num;
        result.dem = fra1.dem;
    }
    else
    {
        result.dem = getLCM(fra1.dem, fra2.dem);
        result.num = (result.dem / fra1.dem) * fra1.num + (result.dem / fra2.dem) * fra2.num;
    }

    return result;
}

Fraction operator-(const Fraction &fra1, const Fraction &fra2)
{
    Fraction result;
    if (fra1.dem == fra2.dem)
    {
        result.num = fra1.num - fra2.num;
        result.dem = fra1.dem;
    }
    else
    {
        result.dem = getLCM(fra1.dem, fra2.dem);
        result.num = (result.dem / fra1.dem) * fra1.num - (result.dem / fra2.dem) * fra2.num;
    }

    return result;
}

Fraction operator*(const Fraction &fra1, const Fraction &fra2)
{
    Fraction result;

    result.num = fra1.num * fra2.num;
    result.dem = fra1.dem * fra2.dem;

    return result;
}

Fraction operator/(const Fraction &fra1, const Fraction &fra2)
{
    Fraction result;

    result.num = fra1.num * fra2.dem;
    result.dem = fra1.dem * fra2.num;

    return result;
}

ostream &operator<<(ostream &os, const Fraction &output)
{
    os << " " << output.num << "/" << output.dem;

    return os;
}

istream &operator>>(istream &is, Fraction &input)
{
    is >> input.num >> input.dem;

    if (!is)
        input = Fraction();

    return is;
}

int main(void)
{
    Fraction a(17, 26);
    Fraction b(11, 27);
    Fraction c, d, e, f;

    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;

    cout << "Fraction a:" << endl;
    cout << a << endl;
    cout << "Fraction b:" << endl;
    cout << b << endl;
    cout << "Fraction c:" << endl;
    cout << c << endl;
    cout << "Fraction d:" << endl;
    cout << d << endl;
    cout << "Fraction e:" << endl;
    cout << e << endl;
    cout << "Fraction f:" << endl;
    cout << f << endl;

    cout << "Resultados:" << endl;
    cout << a + b << endl;
    cout << c - d << endl;
    cout << e * f << endl;
    cout << e / f << endl;

    return 0;
}