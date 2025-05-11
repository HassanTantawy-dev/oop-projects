#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    char color;
    double setthengetradius(double r)
    {
        setradius(r);
        return getradius();
    }

public:
    //! overlouded & default constructor
    Circle(double r = 2, char c = 'b') : radius(setthengetradius(r)), color(c) {}

    double getradius() const
    {
        return radius;
    }

    void setradius(double r)
    {
        if (r < 0)
            radius = 0;
        else
            radius = r;
    }

    double getArea() const
    {
        return 3.14 * radius * radius;
    }

    double getCircumference() const
    {
        return 2 * 3.14 * radius;
    }
};

int main()
{
    Circle c;

    cout << "Radius: " << c.getradius() << endl;
    cout << "Area: " << c.getArea() << endl;
    cout << "Circumference: " << c.getCircumference() << endl;

    return 0;
}
