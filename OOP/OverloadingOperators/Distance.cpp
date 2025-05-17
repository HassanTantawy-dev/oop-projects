#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    Distance() : feet(0), inches(0) {}
    Distance(int f, int i) : feet(f), inches(i) {}
    void display()
    {
        cout << " feet = " << feet << endl;
        cout << " inches =" << inches << endl;
    }
    Distance operator+(Distance d){
        int f = feet + d.feet;
        int i = inches + d.inches;
        if (i >= 12)
        {
            f += i / 12;
            i = i % 12;
        }
        return Distance(f, i);
    }
Distance operator-(Distance d){
        int f = feet - d.feet;
        int i = inches - d.inches;
        if (i >= 12)
        {
            f += i / 12;
            i = i % 12;
        }
        return Distance(f, i);
    }
};
int main()
{
    Distance d1(5, 10);
    Distance d2(3, 4);
    Distance d3 =  d1 + d2;;
    
    
}