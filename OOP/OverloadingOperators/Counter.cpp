#include <iostream>
using namespace std;

class Counter
{
private:
    unsigned int count;

public:
    Counter() : count(0) {}
    Counter(int c) : count(c) {}
    int getcount()
    {
        return count;
    }
    Counter operator++() // prefix
    {
        ++count;
        return Counter(count);
    }
    Counter operator++(int) // postfix
    {
        count++;
        return Counter(++count);
    }
    Counter operator--() // prefix
    {
        --count;
        return Counter(count);
    }

    Counter operator--(int) // postfix
    {
        count--;
        return Counter(--count);
    }
};
int main()
{
    Counter c1(5);
    Counter c2(10);
    Counter c3 = ++c1;
    cout << "Counter 1: " << c3.getcount() << endl;
    Counter c4 = --c2;
    cout << "Counter 2: " << c4.getcount() << endl;
};
