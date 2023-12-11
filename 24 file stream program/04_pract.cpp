#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    int no_student, roll;
    string str;
    char ans,str1[50], str2[50], str3[50], str4[10];

    fstream obj;
    obj.open("04_pract.txt",ios :: out | ios :: app | ios :: in);           
                                                            // "out" for write in the file and "in" for read the file   
    cout<<"Enter the number of student : ";
    cin>>no_student;

    for (int i = 1; i <= no_student; i++)
    {
        cin.ignore();
        cout<<"\n\nEnter the name of student "<<i<<" : ";
        cin.get(str1, 50);
        
        cout<<"Enter the roll number of student "<<i<<" : ";
        cin>>roll;
        
        cin.ignore();
        cout<<"Enter the course of student "<<i<<" : ";
        cin.get(str2, 50);
        
        cin.ignore();
        cout<<"Enter the branch of student "<<i<<" : ";
        cin.get(str3, 50);

        cin.ignore();
        cout<<"Enter the semester of student "<<i<<" : ";
        cin.get(str4, 50);
        
        obj<<"# Information Detail of student "<<i<<endl<<endl;
        obj<<"Name: "<<str1;
        obj<<"\nRoll number: "<<roll;
        obj<<"\nCourse: "<<str2;
        obj<<"\nBranch: "<<str3;
        obj<<"\nSemester: "<<str4<<endl<<endl;
    } 
    obj.close();

    cout<<"\n\nDo you want read data of file(y/n): ";
    cin>>ans;
    if (ans == 'y')
    {
        obj.open("04_pract.txt");

        if (!obj)
        {
            cout<<"\nFile not exist !";
            exit(0);
        }
        while (!obj.eof())
        {
            getline(obj,str);
            cout<<str<<endl;
        }
        obj.close();
    }
    
    return 0;
}