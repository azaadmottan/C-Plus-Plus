#include<iostream>
#include<fstream>               // fstream : It is used to create files
using namespace std;            

int main()
{
    ofstream obj("01_pract.txt");          // ofstream : It is used to write information to the files.

    string s;

    s = "Here we use ofstream for write in the file";
    obj<<s;
    cout<<"Successfully write in the file";

    obj.close();

    return 0;
}