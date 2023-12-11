#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string str;
    char ans, str1[50], str2[50], str3[50];
    int roll;

    fstream obj;

    obj.open("41_pract.txt",ios::out);
    cout<<"File created succesfully !";

    cout<<"\nEnter name: ";
    // cin>>str1;
    cin.get(str1,50);

    cout<<"Enter Roll number: ";
    cin>>roll;

    cout<<"Enter Course: ";
    cin>>str2;

    cout<<"Enter Branch: ";
    cin>>str3;

    obj<<"Name: "<<str1;
    obj<<"\nRoll number: "<<roll;
    obj<<"\nCourse: "<<str2;
    obj<<"\nBranch: "<<str3;

    obj.close();

    cout<<"\nDo You want read the data(Enter y/n): ";
    cin>>ans;

    if (ans == 'y')
    {
        obj.open("41_pract.txt",ios::in);

        if (!obj)
        {
            cout<<"\nFile not exist !";
            exit(0);
        }
        while (!obj.eof())
        {
            getline(obj,str);
            cout<<endl<<str<<endl;
        }
        obj.close();
    }

    return 0;
}