#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

void add();
void subt();
void mult();
void div();
void power();
void square();
void cube();
void squareroot();
void cuberoot();
void factorial();

int main()
{
    call :

    cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t******Scientific Calculator******"<<endl;
    cout<<"Enter 1 for addition"<<endl;
    cout<<"Enter 2 for subtraction"<<endl;
    cout<<"Enter 3 for multiplication"<<endl;
    cout<<"Enter 4 for division"<<endl;
    cout<<"Enter 5 for power"<<endl;
    cout<<"Enter 6 for square"<<endl;
    cout<<"Enter 7 for cube"<<endl;
    cout<<"Enter 8 for squareroot"<<endl;
    cout<<"Enter 9 for cuberoot"<<endl;
    cout<<"Enter 10 for factorial"<<endl;

    int num;

    cout<<"\nEnter number of operation : ";
    cin>>num;

    switch(num)
    {
        case 1: add();
                break;
        case 2: subt();
                break;
        case 3: mult();
                break;
        case 4: div();
                break;
        case 5: power();
                break;
        case 6: square();
                break;
        case 7: cube();
                break;
        case 8: squareroot();
                break;
        case 9: cuberoot();
                break;
        case 10: factorial();
                break;
        default: cout<<"Wrong number of operation";               
                break;
    }

    char choice;
    cout<<"\nDo you want again calculate !\n(Enter y/n): ";
    cin>>choice;

    if(choice == 'y' || choice == 'Y')
    {
        system("cls");
        goto call;
    }
    else
    {
        exit(0);
    }

    return 0;
}


void add()
{
    int num1,num2;

    cout<<"Enter numbers for addition : ";
    cin>>num1>>num2;

    cout<<"Addition of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;
}


void subt()
{
    int num1,num2;

    cout<<"Enter numbers for subtraction : ";
    cin>>num1>>num2;

    cout<<"Subtraction of "<<num1<<" and "<<num2<<" is "<<num1-num2<<endl;
}


void mult()
{
    int num1,num2;

    cout<<"Enter numbers for multiplication : ";
    cin>>num1>>num2;

    cout<<"Multiplication of "<<num1<<" X "<<num2<<" is "<<num1*num2<<endl;
}


void div()
{
    float num1,num2;

    cout<<"Enter numbers for division : ";
    cin>>num1>>num2;

    cout<<"Division of "<<num1<<"/"<<num2<<" is "<<(float)(num1/num2)<<endl;
}


void power()
{
    double num1,num2;

    cout<<"Enter value of base and power (base ^ power) : ";
    cin>>num1>>num2;

    cout<<"The solution of ("<<num1<<"^"<<num2<<")"<<" is "<<pow(num1,num2)<<endl;
}


void square()
{
    double num1;

    cout<<"Enter number for square (number ^ 2) : ";
    cin>>num1;

    cout<<"The square of ("<<num1<<"^"<<2<<")"<<" is "<<num1*num1<<endl;
}


void cube()
{
    double num1;

    cout<<"Enter the number for cube (number ^ 3) : ";
    cin>>num1;

    cout<<"The square of ("<<num1<<"^"<<3<<")"<<" is "<<num1*num1*num1<<endl;
}


void squareroot()
{
    double num1;

    cout<<"Enter number which you want find squareroot : ";
    cin>>num1;

    cout<<"The squareroot of "<<num1<<" is "<<sqrt(num1)<<endl;
}


void cuberoot()
{
    double num1;

    cout<<"Enter number which you want find cuberoot : ";
    cin>>num1;

    cout<<"The cuberoot of "<<num1<<" is "<<cbrt(num1)<<endl;
}


void factorial()
{
    int num1,fact=1;

    cout<<"Enter number you want find factorial : ";
    cin>>num1;
    
    for(int i=1; i<=num1; i++)
    {
        fact = fact*i;
    }

    cout<<"The factorial of "<<num1<<"! is "<<fact<<endl;
}