#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<stdlib.h>
using namespace std;

int main();

class bank
{
    private:

        string name;
        string type;
        string address;
        string email;
        string password;
        long long int acc_no;
        long long int amount;
        long long int phone;

    public :

        void create_account();
        void login();
        void show_data();
        void modify_account();
        void deposit();
        void with_draw();
        void check_balance();

};


void bank :: create_account()
{
    char option;

    system("cls");

    cout<<"\t\t\t\tC R E A T E    A C C O U N T";

    cout<<"\n\nPlease enter valid information !\n\n";

    cin.ignore();

    cout<<"\nNAME                : ";
    getline(cin, name);

    // cout<<name;

    cout<<"\nACCOUNT NUMBER      : ";
    cin>>acc_no;

    cin.ignore();
    cout<<"\nACCOUNT TYPE        : ";
    getline(cin, type);
    
    // cin.ignore();
    cout<<"\nCREATE PASSWORD     : ";
    cin>>password;

    // cin.ignore();
    cout<<"\nEMAIL               : ";
    cin>>email;

    cin.ignore();
    cout<<"\nADDRESS             : ";
    getline(cin, address);

    // cin.ignore();
    cout<<"\nPHONE               : ";
    cin>>phone;

    cout<<"\n\nEnter Intitial amount for deposit\n(deposit > 1000 for \"saving account\" & deposit > 5000 for \"current account\") : ";
    cin>>amount;

    cout<<"\n\n\t\tA C C O U N T    C R E A T E D    S U C C E S S F U L L Y !";


    fstream obj;

    obj.open("03_project.txt", ios :: out);

    obj<<name<<"\n"<<acc_no<<"\n"<<email<<"\n"<<password<<"\n"<<amount<<"\n"<<type<<"\n"<<address<<"\n"<<phone;

    obj.close();


    call:

    cout<<"\n\n-----------------------------";
    cout<<"\nPress 1 for back to home page\n";

    cout<<"\nEnter            : ";
    cin>>option;

    switch (option)
    {
        case '1':
                main();
                break;
                
        default:
                cout<<"\n\nPlease enter valid option\n\n";
                goto call;

                break;
    }
}


void bank :: login()
{
    int i, count;
    char option;
    string acc, pass, str, text, word[8];

    system("cls");
    
    cout<<"\t\t\t\tL O G I N    P A G E\n\n";
    
    top : 

    cout<<"Enter Account number : ";
    cin>>acc;

    cout<<"\nEnter Password     : ";
    cin>>pass;
    

    fstream obj;

    obj.open("03_project.txt", ios :: in);

    if (obj.is_open())
    {
        i = 0;
        while (!obj.eof())
        {
            while (getline(obj, str))
            {
                istringstream iss(str);
                iss>>text;

                word[i] = text;
                i++;
            }
            
        }

        if (acc == word[1] && pass == word[3])
        {
            system("cls");

            cout<<"\t\t\t\t\t\t\t\t\t\t\tACCOUNT NO.: "<<acc<<"\nlogin successfully !";
            cout<<"\n\nNAME           \t: "<<word[0];
            cout<<"\nEMAIL          \t: "<<word[2];
            // cout<<"\nACCOUNT TYPE   \t: "<<word[5];
            // cout<<"\nPHONE NUMBER   \t: "<<word[7];
                        
            cout<<"\n\nThanks for Logging in !\n\n";


            obj.close();
        }
        else
        {
            cout<<"\nLogin Error !\n\n\""<<acc<<"\" is not found !";
            cout<<"\n\nPlease Enter valid UserId !\n\n\n";

            goto top;
        }
        
    }
    
    obj.close();

    call:

    cout<<"\n\n-----------------------------";
    cout<<"\nPress 1 for back to home page\n";

    cout<<"\nEnter            : ";
    cin>>option;

    switch (option)
    {
        case '1':
                main();
                break;
                
        default:
                cout<<"\n\nPlease enter valid option\n\n";
                goto call;

                break;
    }

}


void bank :: show_data()
{
    int i;
    char option;
    string str, text, acc, pass, word[8];

    system("cls");

    top : 

    cout<<"\t\t\t\tA C C O U N T    D A T A\n\n";

    cout<<"Enter Account number \t: ";
    cin>>acc;

    cout<<"Enter Password       \t: ";
    cin>>pass;

    fstream obj;

    obj.open("03_project.txt", ios :: in);

    if (obj.is_open())
    {
        i = 0;
        while (!obj.eof())
        {
            while (getline(obj, str))
            {
                istringstream iss(str);
                iss>>text;

                iss.ignore();
                word[i] = text;
                i++;
            }
        }
        
        if (acc == word[1] && pass == word[3])
        {
            system("cls");

            cout<<"\t\t\t\tA C C O U N T    D A T A\n\n";

            cout<<"\t\t\t\t\t\t\t\t\t\t\tACCOUNT NO.: "<<acc;

            cout<<"\n\nNAME            \t: "<<word[0];

            cout<<"\nEMAIL           \t: "<<word[2];

            cout<<"\nACCOUNT TYPE    \t: "<<word[5];

            cout<<"\nPHONE NUMBER    \t: "<<word[7];

            cout<<"\n\nTOTAL BALANCE \t\t: "<<word[4];

            obj.close();
        }
        else
        {
            cout<<"\nLogin Error !\n\n\""<<acc<<"\" is not found !";

            cout<<"\n\nPlease Enter valid UserId !\n\n\n";

            goto top;
        }
        
    }

    obj.close();


    call:

    cout<<"\n\n-----------------------------";
    cout<<"\nPress 1 for back to home page\n";

    cout<<"\nEnter            : ";
    cin>>option;

    switch (option)
    {
        case '1':
                main();
                break;
                
        default:
                cout<<"\n\nPlease enter valid option\n\n";
                goto call;

                break;
    }
}


void bank :: modify_account()
{
    int i;
    char option;
    string str, text, acc, pass, word[8];

    system("cls");

    top : 

    cout<<"\t\t\tM O D I F Y    A C C O U N T    D E T A I L S\n\n";

    cout<<"Enter Account number \t: ";
    cin>>acc;

    cout<<"Enter Password       \t: ";
    cin>>pass;

    fstream obj;

    obj.open("03_project.txt", ios :: in);
        
    if (obj.is_open())
    {
        i = 0;
        while (!obj.eof())
        {
            while (getline(obj, str))
            {
                istringstream iss(str);
                iss>>text;

                iss.ignore();
                word[i] = text;
                i++;
            }
        }
        obj.close();

        if (acc == word[1] && pass == word[3])
        {
            system("cls");

            fstream obj1;

            obj1.open("03_project.txt", ios :: out);

            cout<<"\t\t\tM O D I F Y    A C C O U N T    D E T A I L S\n\n";

            cout<<"\t\t\t\t\t\t\t\t\t\t\tACCOUNT NO.: "<<acc;

            cout<<"\nEMAIL               : ";
            cin>>email;
            // cout<<"\nEMAIL           \t: "<<word[3];
            cin.ignore();
            cout<<"\nACCOUNT TYPE        : ";
            getline(cin, type);

            // cout<<"\nACCOUNT TYPE    \t: "<<word[5];

            cout<<"\nPHONE               : ";
            cin>>phone;
            // cout<<"\nPHONE NUMBER    \t: "<<word[7];

            cout<<"\nNEW PASSWORD        : ";
            cin>>password;
            // cout<<"\n\nTOTAL BALANCE \t\t: "<<word[4];

            obj1<<word[0]<<"\n"<<word[1]<<"\n"<<email<<"\n"<<password
                <<"\n"<<word[4]<<"\n"<<type<<"\n"<<word[6]<<"\n"<<phone;

            obj1.close();
        }
        else
        {
            cout<<"\nLogin Error !\n\n\""<<acc<<"\" is not found !";

            cout<<"\n\nPlease Enter valid UserId !\n\n\n";

            goto top;
        }
        
    }

    obj.close();

    call:

    cout<<"\n\n-----------------------------";
    cout<<"\nPress 1 for back to home page\n";

    cout<<"\nEnter            : ";
    cin>>option;

    switch (option)
    {
        case '1':
                main();
                break;
                
        default:
                cout<<"\n\nPlease enter valid option\n\n";
                goto call;

                break;
    }    

}


void bank :: deposit()
{
    int i;
    long long int new_amount, num;
    char option;
    string acc, pass, str, text, word[8];

    system("cls");

    cout<<"\t\t\t\tD E P O S I T    M O N E Y\n\n";

    top : 

    cout<<"Enter Account number : ";
    cin>>acc;

    cout<<"\nEnter Password     : ";
    cin>>pass;
    

    fstream obj;

    obj.open("03_project.txt", ios :: in);

    if (obj.is_open())
    {
        i = 0;
        while (!obj.eof())
        {
            while (getline(obj, str))
            {
                istringstream iss(str);
                iss>>text;

                word[i] = text;
                i++;
            }
            
        }
        obj.close();

        if (acc == word[1] && pass == word[3])
        {
            system("cls");

            cout<<"\t\t\t\t\t\t\t\t\t\t\tACCOUNT NO.: "<<acc<<"\nlogin successfully !";

            cout<<"\n\nNAME           \t: "<<word[0];

            cout<<"\nEMAIL          \t: "<<word[2];
                        
            fstream obj1;

            obj1.open("03_project.txt", ios :: out);

            cout<<"\n\nEnter amount \t: ";
            cin>>new_amount;

            num = stoi(word[4]);

            new_amount += num;
            // cout<<"amount"<<new_amount;

            obj1<<word[0]<<"\n"<<word[1]<<"\n"<<word[2]<<"\n"<<word[3]
            <<"\n"<<new_amount<<"\n"<<word[5]<<"\n"<<word[6]<<"\n"<<word[7];


            cout<<"\n\n\t"<<new_amount-num<<" $ CREDIT SUCCESSFULLY !";

            obj1.close();
        }
        else
        {
            cout<<"\nLogin Error !\n\n\""<<acc<<"\" is not found !";

            cout<<"\n\nPlease Enter valid UserId !\n\n\n";

            goto top;
        }
        
    }
    
    obj.close();

    call:

    cout<<"\n\n-----------------------------";
    cout<<"\nPress 1 for back to home page\n";

    cout<<"\nEnter            : ";
    cin>>option;

    switch (option)
    {
        case '1':
                main();
                break;
                
        default:
                cout<<"\n\nPlease enter valid option\n\n";
                goto call;

                break;
    }
}


void bank :: with_draw()
{
    int i;
    long long int new_amount, num;
    char option;
    string acc, pass, str, text, word[8];

    system("cls");

    cout<<"\t\t\t\tW I T H D R A W    M O N E Y\n\n";

    top1 : 

    cout<<"Enter Account number : ";
    cin>>acc;

    cout<<"\nEnter Password     : ";
    cin>>pass;
    

    fstream obj;

    obj.open("03_project.txt", ios :: in);

    if (obj.is_open())
    {
        i = 0;
        while (!obj.eof())
        {
            while (getline(obj, str))
            {
                istringstream iss(str);
                iss>>text;

                word[i] = text;
                i++;
            }
            
        }
        obj.close();

        if (acc == word[1] && pass == word[3])
        {
            system("cls");

            cout<<"\t\t\t\t\t\t\t\t\t\t\tACCOUNT NO.: "<<acc<<"\nlogin successfully !";

            cout<<"\n\nNAME           \t: "<<word[0];

            cout<<"\nEMAIL          \t: "<<word[2];
                        

            top2 : 

            cout<<"\n\nEnter amount \t: ";
            cin>>new_amount;

            num = stoi(word[4]);

            if (new_amount <= num)
            {
                fstream obj1;

                obj1.open("03_project.txt", ios :: out);

                num -= new_amount;
                
                // cout<<"amount"<<new_amount;

                cout<<"\n\n\t"<<new_amount<<" $ DEBIT SUCCESSFULLY !";

                obj1<<word[0]<<"\n"<<word[1]<<"\n"<<word[2]<<"\n"<<word[3]
                <<"\n"<<num<<"\n"<<word[5]<<"\n"<<word[6]<<"\n"<<word[7];
            
                obj1.close();
            }
            else
            {
                cout<<"\n\nNOT ENOUGH MONEY !";

                goto top2;
            }

        }
        else
        {
            cout<<"\nLogin Error !\n\n\""<<acc<<"\" is not found !";

            cout<<"\n\nPlease Enter valid UserId !\n\n\n";

            goto top1;
        }
        
    }
    
    obj.close();

    call:

    cout<<"\n\n-----------------------------";
    cout<<"\nPress 1 for back to home page\n";

    cout<<"\nEnter            : ";
    cin>>option;

    switch (option)
    {
        case '1':
                main();
                break;
                
        default:
                cout<<"\n\nPlease enter valid option\n\n";
                goto call;

                break;
    }

}


void bank :: check_balance()
{
    system("cls");

    int i;
    long long int new_amount, num;
    char option;
    string acc, pass, str, text, word[8];

    cout<<"\t\t\t\tA C C O U N T    B A L A N C E\n\n";

    top1 : 

    cout<<"Enter Account number : ";
    cin>>acc;

    cout<<"\nEnter Password     : ";
    cin>>pass;
    

    fstream obj;

    obj.open("03_project.txt", ios :: in);

    if (obj.is_open())
    {
        i = 0;
        while (!obj.eof())
        {
            while (getline(obj, str))
            {
                istringstream iss(str);
                iss>>text;

                word[i] = text;
                i++;
            }
            
        }
        obj.close();

        if (acc == word[1] && pass == word[3])
        {
            system("cls");

            cout<<"\t\t\t\t\t\t\t\t\t\t\tACCOUNT NO.: "<<acc<<"\nlogin successfully !";

            cout<<"\n\nNAME           \t: "<<word[0];

            cout<<"\nEMAIL          \t: "<<word[2];
                        

            cout<<"\n\nYour's Total Balance  : "<<word[4]<<" $";

            obj.close();
        }
        else
        {
            cout<<"\nLogin Error !\n\n\""<<acc<<"\" is not found !";

            cout<<"\n\nPlease Enter valid UserId !\n\n\n";

            goto top1;
        }
        
    }
    
    obj.close();

    call:

    cout<<"\n\n-----------------------------";
    cout<<"\nPress 1 for back to home page\n";

    cout<<"\nEnter            : ";
    cin>>option;

    switch (option)
    {
        case '1':
                main();
                break;
                
        default:
                cout<<"\n\nPlease enter valid option\n\n";
                goto call;

                break;
    }

}


int main()
{
    system("cls");

    bank obj;

    char option;

    cout<<"\n-------------------------------------------------------------------------------------------------------------------"<<endl;

    cout<<"\t\t\tW E L C O M E    T O    C E N T R A L    B A N K    O F    I N D I A";

    top1 : 

    cout<<"\n\n\n\n_____________        M E N U        _____________\n\n";

    cout<<"|\tPress 1 for CREATE ACCOUNT     \t\t|\n";
    cout<<"|\tPress 2 for LOGIN              \t\t|\n";
    cout<<"|\tPress 3 for SHOW DATA          \t\t|\n";
    cout<<"|\tPress 4 for MODIFY ACCOUNT     \t\t|\n";
    cout<<"|\tPress 5 for DEPOSIT MONEY!     \t\t|\n";
    cout<<"|\tPress 6 for WITHDRAW MONEY     \t\t|\n";
    cout<<"|\tPress 7 for CHECK BALANCE      \t\t|\n";
    cout<<"|\tPress 8 for EXIT !             \t\t|\n";
    cout<<"\n\tPlease enter your choice      \t\t: ";
    cin>>option;

    switch (option)
    {
        case '1':
                obj.create_account();
                break;

        case '2':
                obj.login();
                break;

        case '3':
                obj.show_data();
                break;

        case '4':
                obj.modify_account();
                break;

        case '5':
                obj.deposit();
                break;

        case '6':
                obj.with_draw();
                break;

        case '7':
                obj.check_balance();
                break;

        case '8': 
                cout<<"\n\n\n\t\t\tT H A N K Y O U    F O R    U S I N G    N E T B A N K I N G";

                cout<<"\n-------------------------------------------------------------------------------------------------------------------\n";

                cout<<"\n                                                                                                     # azaad mottan\n";

                exit(0);
                break;

        default:
                cout<<"\n\nPlease Enter valid option !";
                goto top1;
                
            break;
    }

    return 0;
}