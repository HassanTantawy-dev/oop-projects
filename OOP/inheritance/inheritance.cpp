#include <iostream>
using namespace std;

class vehicle
{
private:
    string brand;
    int year;

public:

vehicle(string b, int y): brand(b), year(y){}
   
vehicle()
    {
        brand = "unknown";
        year = 0;
    }
    void getinfo()
    {
        cout << "brand: " << brand << endl;
        cout << "year: " << year << endl;
    }
};
class car : public vehicle
{
private:
    int speed;
    int speedChanger;

public:
    car(string b, int y, int s, int sc) : vehicle(b, y)
    {
        speed = s;
        speedChanger = sc;
    }
void accelerate()
{
    speed += speedChanger;
    cout << "accelerating, speed is now: " << speed << endl;
}
void deceleration()
{
    speed -= speedChanger;
    cout << "decelerating, speed is now: " << speed << endl;
};
    void getinfo()
    {
        vehicle::getinfo();
        cout << "speed: " << speed << endl;
        cout << "speed changer: " << speedChanger << endl;
    }
};

int main()
{
    car c1("BMW", 2020, 200, 10);

     c1.getinfo();
     c1.accelerate();
     c1.deceleration();

    return 0;
};
