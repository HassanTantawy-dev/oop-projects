#include <iostream>
using namespace std;

/*void fun(int *x)
{
    *x = 8;
}
void fun(int x)
{
    x = 8;
}*/

/*void fun2()
{
    int arr[1000000];//! *4 = 4MB  //! static memory->1MB->Windows
    //!linex->4MB
}*///! overflow & crash

int main()
{
    cout<<"***********************\n";
   int* arr= new int [2000000];
   arr[0] =10;
   arr[2000000-1] =5;
   cout<<arr[0]<<endl;
   cout<<arr [2000000-1]<<endl;
   delete []arr;
   arr = nullptr;

   
   
   
   //fun2();
    // int arr[1000000];

 /*   int *x = new int(5);
    cout << &x << endl;
    cout << x << endl;
    delete x;    //! free
    x = NULL;    //! old form -> So that there is no crash
    x = nullptr; //! new form-> So that there is no crash
                 //?CRASH: writing to freed memory (dangling pointer)

    if (x != nullptr) //! This is a solution if I want the X to not be erased
    {
        *x = 10;
    }

    /* int *x = new int(5);

cout << *x;
*x = 7;
cout << "\n"
<< *x << endl;

int y = 10;
int* z = &y;
cout<<y<<endl;
cout<<*z<<endl;
delete x;
delete z;

int *x = new int(5);//!x pointer:stored heap
fun(x);
cout << *x << endl;

int y = 5;
fun(y);
cout << y;
delete x;*/

    return 0;
}