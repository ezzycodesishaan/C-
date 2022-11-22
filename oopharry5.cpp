#include <iostream>
#include <string>
using namespace std;
class complex;
class calculator
{
public:
    int add(int x, int y)
    {
        return x + y;
    }
    int sumreal(complex, complex);
    int sumcomp(complex, complex);
};

class complex
{

    int a;
    int b;
    static int count;
    friend complex sumcomplex(complex, complex);

public:
    void setdata(int p, int h)
    {

        a = p;
        b = h;
        count++;
    }
    friend class calculator;

    void printn()
    {
        cout << "the imaginary no. is  " << a << "+i" << b << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int calculator::sumreal(complex o1, complex o2)
{
    return o1.a + o2.a;
}
int calculator::sumcomp(complex o1, complex o2)
{
    return o1.b + o2.b;
}

int complex::count;

int main()
{
    complex c1, c2;

    int x, k, n;
    complex sum;
    cout << "enter the the numbers want to put " << endl;
    cin >> n;

    cout << "enter a" << endl;
    cin >> x;
    cout << "enter b" << endl;
    cin >> k;

    c1.setdata(x, k);
    c1.printn();
    cout << "enter a" << endl;
    cin >> x;
    cout << "enter b" << endl;
    cin >> k;

    c2.setdata(x, k);
    c2.printn();
    sum = sumcomplex(c1, c2);
    sum.printn();
    calculator calc;
    int res = calc.sumreal(c1, c2);
    cout << "sum of real parts" << res << endl;
    int resc = calc.sumcomp(c1, c2);
    cout << "sum of the complex parts" << resc << endl;

    return 0;
}
