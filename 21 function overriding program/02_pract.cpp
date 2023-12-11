#include<iostream>
using namespace std;

class base 
{
    public :
            int a = 10;

            virtual void putdata()
            {
                cout<<"The value of a (in base class) is "<<a<<endl;
            }
};

class derived : public base 
{
    public :
            int b = 20;
            void putdata()
            {
                cout<<"The value of a (in derived class) is "<<a<<endl;
                cout<<"The value of b (in derived class) is "<<b<<endl;
            }
};

int main()
{
    base bb;
    derived dd;

    base *ptr;
    // ptr = &bb;
    ptr = &dd;

    ptr -> putdata();
            
    // derived dd;
    
    derived *ptr1;
    ptr1 = &dd;

    ptr1 -> putdata();

    return 0;
}

// Rules for virtual functions

// 1. They cannot be static
// 2. They are accessed by object pointers
// 3. Virtual functions can be a friend of another class
// 4. A virtual function in the base class might not be used.
// 5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class