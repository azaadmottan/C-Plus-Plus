#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in("01_pract.txt");     // ifstream : It is used to read information from files.
    
    string s;
    
    // in>>s;
    getline(in,s);
    cout<<"The file content is : "<<s;

    in.close();

    return 0;
}