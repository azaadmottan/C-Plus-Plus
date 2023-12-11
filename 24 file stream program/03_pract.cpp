#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream in;

    string st;

    in.open("03_pract.txt");
    while (in.eof() == 0)
    {
        getline(in, st);
        cout<<st;
    }
    
    in.close();

    return 0;
}