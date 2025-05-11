#include <iostream>
using namespace std;

class student
{
private:
    int id;
    string name;

public:
    //! this >> object pointer
    student(int id, string name)
    {
        //  cout<<this<<endl;
        this->id = id; // this-> = (*this).
        this->name = name;
    }
    void setid(int id)
    {
        this->id = id;
    }
    void setname(string name)
    {
        this->name = name;
    }
    int getid()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
};

int main()
{
    student s1(1, "hassan");
    student *s2 = new student(2, "hi");
    cout << s2 << endl;
    cout << s2->getname() << endl;

    return 0;
}
