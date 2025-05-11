#include <iostream>
using namespace std;

class demo
{
public:
    int x;
    demo(int val) : x(val) {}
    void fun();
};
//! regular >> inline
inline void demo::fun()
{
    cout << "hi, iam regular from class "<<endl;
}
void fun(){
    cout<<"hi, i have no class"<<endl;
}
int main()
{
   demo obj1(10), obj2(20);
   obj1.fun();
   fun();
    
   return 0;
}