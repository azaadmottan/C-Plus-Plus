#include<iostream>
#include<string.h>
using namespace std;

typedef struct notebook
{
    int page;
    char title[10];
    float price;
}nb;                                         // here we use typedef for alias name

union employee
{
    int page;
    char author;                            // in union only one member run
    float price;
};

enum day
{
    monday,                                 // 0
    tuesday,                                // 1
    wednesday                               // 2
};                                          // enum give the position

int main()
{
    nb book;
    book.page = 400;
    strcpy(book.title,"let us c++");
    book.price = 250.55;
    
    cout<<"Book title is "<<book.title<<endl;
    cout<<"Total pages "<<book.page<<endl;
    cout<<"Price of book is "<<book.price<<endl;

    union employee emp;
    emp.page = 200; 
    emp.price = 250;
    emp.author = 'c';

    cout<<"Book title is "<<emp.author<<endl;
    
    day one = monday;
    day two = tuesday;
    day three = wednesday;
    cout<<one<<endl;
    cout<<two<<endl;
    cout<<three;

    return 0;
}