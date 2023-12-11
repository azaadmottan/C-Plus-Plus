#include<iostream>
using namespace std;

class first
{
    int num1,num2;

    public :
        first(int x, int y)
        {
            num1 = x;
            num2 = y;
        }
        
        void display()
        {
            cout<<"The value of num1: "<<num1<<" and "<<" num2: "<<num2<<endl;
        }
        void* operator new(size_t size)
        {
            cout<<"Size of new operator: "<<size<<endl;

            void * ptr = ::operator new(size);

            return ptr;
        }
        void operator delete(void *ptr)
        {
            cout<<"Free space of new operator"<<endl;
            free(ptr);
        }
};

int main()
{
    first *ob = new first(2,4);
    ob->display();

    delete ob;


    return 0;
}