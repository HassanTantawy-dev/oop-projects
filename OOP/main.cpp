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
//       Circle() :Circle(6){}

  //  Circle(double r) :Circle(r,'b') {}
    Circle(double r=1, char c='b') : radius(setthengetradius(r)), color(c) {}

    double getradius()
    {
        return radius;
    }

    void setradius(double r)
    {
        if (r <= 0)
        {
            r = 1;

            radius = r;
        }
    }

    double getArea()
    {
        return 3.14 * radius * radius;
    }

    double getCircumference()
    {
        return 2 * 3.14 * radius;
    }
    string print()
    {
        return "(radius = " + to_string(radius) + " & color = " + color + ")";
    }
};

int main()
{
    Circle c1(2);
    cout << c1.print()<<endl;
    Circle c2(1, 'g');
    cout << c2.print() << endl;
    Circle c3();
    //cout << c3.print() << endl;
    Circle c4(1); 
    cout<< c4.getCircumference() << endl;
    return 0;
}
