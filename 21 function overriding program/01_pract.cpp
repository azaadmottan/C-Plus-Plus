#include<iostream>
using namespace std;

class base 
{
    public :
            int a;
            void putdata()
            {
                cout<<"The value of a (in base class) is "<<a<<endl;
            }
};                                                      // Polymorphism are two type : 
                                                        // 1. Compile time poymorphism (Early binding polymorphism)
class derived : public base                             //    1.1 Function overloading        
{                                                       //    1.2 Operator overloading
    public :                                            
            int b;                                      // 2. Run time polymorphism (Late binding polymorphism)
            void  putdata()                             //    2.1 function overriding
            {                                           //    2.2 Virtual function
                cout<<"The value of a (in derived class) is "<<a<<endl;
                cout<<"The value of b (in derived class) is "<<b<<endl;
            }
};

int main()
{
    base bb;                                   
    derived dd;                         
    base *ptr;             // if we creat base class pointer they can call base class function                                       
                                               
    ptr = &dd;              
    ptr -> a = 20;           
                                               
    // ptr -> b = 20;      // will through error      
    ptr -> putdata();                   
            
    // derived dd;
    
    derived *ptr1;         // if we creat derived class pointer they can call derived class function
    ptr1 = &dd;

    ptr1 -> a = 10;
    ptr1 -> b = 40;
    ptr1 -> putdata();

    return 0;
}