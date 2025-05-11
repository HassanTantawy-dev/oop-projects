#include <iostream>
using namespace std;

class point
{
private:
    int x;
    int y;

public:
    point(int x = 0, int y = 0) : x(x), y(y) {}

    void setx(int x)
    {
        this->x = x;
    }
    void sety(int y)
    {
        this->y = y;
    }
    int getx()
    {
        return x;
    }

    int gety()
    {
        return y;
    }
};

int main()
{
    point p1(5, 3);

    cout << "point (static storage) = (" << p1.getx() << "," << p1.gety() << ")" << endl;

    point *p2 = new point(5, 3);

    cout << "point (dynamic storage) = (" << p2->getx() << "," << p2->gety() << ")" << endl;

    delete p2;

    return 0;
};