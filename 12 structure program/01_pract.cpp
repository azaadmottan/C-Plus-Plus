#include<iostream>
#include<string.h>
using namespace std;

struct book
{
    char name[20];
    int page;
    float price;
};

int main()
{
    struct book b;

    strcpy(b.name,"let us c++");
    b.page = 400;
    b.price = 250.55;

    cout<<"Book name is "<<b.name<<endl;
    cout<<"Total pages "<<b.page<<endl;
    cout<<"Price of book is "<<b.price<<endl;

    return 0;
}