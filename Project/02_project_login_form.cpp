#include<iostream>
#include<fstream>
#include<sstream>
#include<stdlib.h>
#include<string>
using namespace std;

void registration_form();
void login_form();
void forgot_password();
void change_password();
void account_details();

int main()
{
    char option;

    system("cls");

    cout<<"\n-------------------------------------------------------------------------------------------------------------------"<<endl;
        
    cout<<"\t\t\t\t\tW E L C O M E    T O    G O O G L E";
    cout<<"\n\n\n____________________________________\t\t\tM E N U\t\t\t___________________________________\n\n";

    cout<<"|\tPress 1 for REGISTRATION     \t\t|\n";
    cout<<"|\tPress 2 for LOGIN            \t\t|\n";
    cout<<"|\tPress 3 for FORGOT PASSWORD !\t\t|\n";
    cout<<"|\tPress 4 for CHANGE PASSWORD !\t\t|\n";
    cout<<"|\tPress 5 for ACCOUNT DETAILS !\t\t|\n";
    cout<<"|\tPress 6 for EXIT !           \t\t|\n";
    cout<<"\n\tPlease enter your choice    \t\t: ";
    cin>>option;

    switch (option)
    {
        case '1':
                registration_form();
                break;

        case '2': 
                login_form();
                break;

        case '3': 
                forgot_password();
                break;

        case '4': 
                change_password();
                break;

        case '5': 
                account_details();
                break;
                
        case '6':
                cout<<"\n\n\n\t\t\tT H A N K Y O U    F O R    U S I N G    G O O G L E";
                cout<<"\n-------------------------------------------------------------------------------------------------------------------\n";
                cout<<"\n                                                                                                     # azaad mottan\n";

                exit(0);
                break;

        default:
                system("cls");

                cout<<"\nPlease Enter valid option !\n\n";

                main();
                break;
    }

    return 0;
}


void registration_form()
{
    long long int number;
    char option;
    string user_id, user_pass, f_name, l_name;

    system("cls");

    cout<<"\t\t\t\tR E G I S T R A T I O N    P A G E";
    cout<<"\n\t\t\t\t----------------------------------";

    cout<<"\n\nCreate Your Google Account";

    cout<<"\n\nPlease Create the USERID and PASSWORD\n\n";

    cout<<"\n\tEnter First Name\t: ";
    cin>>f_name;

    cout<<"\tEnter Last Name  \t: ";
    cin>>l_name;

    cout<<"\tPHONE NUMBER     \t: ";
    cin>>number;

    cout<<"\n\tUSER-ID (Name)       \t: ";
    cin>>user_id;

    cout<<"\tPASSWORD         \t: ";
    cin>>user_pass;


    fstream obj;
    obj.open("02_project.txt", ios :: out);

    obj<<user_id<<"@gmail.com"<<'\n'<<user_pass<<'\n'<<number;

    obj.close();

    system("cls");

    cout<<"Your's Email-Id : \""<<user_id<<"@gmail.com\" "<<endl;
    cout<<"\n\n\t\t   Registration Successfully !\n";

    call:

    cout<<"\n\n\t\t   -----------------------------";
    cout<<"\n\t\t   Press 1 for back to home page\n";

    cout<<"\n\t\t   Enter            : ";
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


void login_form()
{
    char option;
    int count = 0, i;
    string user_id, user_pass, text, str, word[3];

    system("cls");

    top:

    cout<<"\t\t\t\tL O G I N    P A G E";
    cout<<"\n\t\t\t\t--------------------";

    cout<<"\n\nPlease Enter the userid and password\n\n";

    cout<<"\t\tEnter userid  \t\t: ";
    cin>>user_id;
    cout<<"\t\tEnter password\t\t: ";
    cin>>user_pass;

    fstream obj;
    obj.open("02_project.txt", ios :: in);


    if(obj.is_open())
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
                        // cout<<"\nFatching data...";                                        
        }
                
        if (user_id == word[0] && user_pass == word[1])
        {
            system("cls");

            cout<<"\t\t\t\t\t\t\t\t\t\t\t\t"<<user_id<<"\nlogin successfully !";
                        
            cout<<"\n\nThanks for Logging in !\n\n";

            count = 1;
        }
        else
        {
            cout<<"\nLogin Error !\n\n\""<<user_id<<"\" is not found !";
            cout<<"\n\nPlease Enter valid UserId !\n";

                        // main();
            goto top;
        }

            obj.close();
    }

        // if(count != 1)                        
        // {
        //         cout<<"\n\n\""<<user_id<<"\" account is not found !\n\n";
        //         goto call;
        // }

    obj.close();

    call:

    cout<<"\n\n\t\t   -----------------------------";
    cout<<"\n\t\t   Press 1 for back to home page\n";

    cout<<"\n\t\t   Enter            : ";
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


void forgot_password()
{
    char option;
    int count = 0, i;
    string user_id, user_pass, prev_id, prev_pass, new_pass, str,text,word[3], old, new_pass1, new_pass2;


    system("cls");

    call:

    cout<<"\t\t\t\tF O R G O T    P A S S W O R D";
    cout<<"\n\t\t\t\t------------------------------";

    cout<<"\n\nIf you forgot your password\n\nEnter UserId and Phone number\n\n";

    top1 : 

    cout<<"\n\t\tEnter UserId    \t: ";
    cin>>user_id;

    cout<<"\t\tEnter Phone number\t: ";
    cin>>user_pass;

    top2 : 

    cout<<"\n\n  Press 1 to Search UserId";
        // cout<<"\n  \tPress 2 for Go back";

    cout<<"\n\n  Enter your choice\t: ";
    cin>>option;

    fstream obj;
    obj.open("02_project.txt", ios :: in);

    switch (option)
    {
        case '1':
                if (obj.is_open())
                {
                    i = 0;
                    while (!obj.eof())
                    {
                        while(getline(obj, str))
                        {
                            istringstream iss(str);
                            iss>>text;

                            word[i] = text;
                            i++;
                        }
                    }
                    obj.close();


                    if(user_id == word[0])
                    {
                        fstream obj1;
                        obj1.open("02_project.txt", ios :: out);       
                        
                        if (obj1.is_open())
                        {

                            cout<<"\n\n\tEnter your new password  \t: ";
                            cin>>new_pass1;
                            cout<<"\tConfirm your password        \t: ";
                            cin>>new_pass2;

                            if (new_pass1 == new_pass2)
                            {
                                obj1<<word[0]<<"\n"<<new_pass1<<"\n"<<word[2];

                                cout<<"\n\nPassword changed succesfully !";

                                count = 1;
                                obj1.close();
                            }
                            else
                            {
                                obj1<<word[0]<<"\n";
                                obj1<<word[1]<<"\n";
                                obj1<<word[2];

                                cout<<"\n\nPassword not match !";
                                

                                obj1.close();
                            }

                            // if (count == 1)
                            // {
                            //     goto top2;
                                
                            // }
                                  
                        }

                        obj1.close();      
                    }     
                    else
                    {
                        cout<<"\n\nPlease enter valid User-Id !"<<endl;
                        goto top1;
                    }
                }
                obj.close();

                if(count == 1)                        
                {
                    // cout<<"\n\n\""<<user_id<<"\" account is found !";
                                // forgot_password();
                    cout<<"\n\nYour's new password is '"<<new_pass1<<"'";
                }
                else
                {
                    cout<<"\n\n\""<<user_id<<"\" account is not found !\n\n";
                                // main();
                                // forgot_password();
                    goto call;
                }
                break;

        default:
                cout<<"\n\n\tPlease Enter valid option !\n\n";
                goto top2;
                break;
    }

    obj.close();

    top:

    cout<<"\n\n\t\t   -----------------------------";
    cout<<"\n\t\t   Press 1 for back to home page\n";

    cout<<"\n\t\t   Enter            : ";
    cin>>option;

    switch (option)
    {
        case '1':
                main();
                break;
                
        default:
                cout<<"\n\nPlease enter valid option\n\n";
                goto top;
                break;
    }

}


void change_password()
{
    char option;
    int count = 0, i;
    string user_id, prev_id, old, str, text, word[3], new_pass1, new_pass2;

    system("cls");

    call :

    cout<<"\t\t\t\tC H A N G E    P A S S W O R D";
    cout<<"\n\t\t\t\t----------------------------";

    cout<<"\n\nIf you change your password\n\nEnter UserId and Old Password\n\n";

    cout<<"\n\t\tEnter UserId    \t: ";
    cin>>user_id;

    top1 : 

    cout<<"\t\tEnter Old Password\t: ";
    cin>>old;

    cout<<"\n\n  Press 1 to Search UserId";
    // cout<<"\n  \tPress 2 for Go back";

    cout<<"\n\n  Enter your choice\t: ";
    cin>>option;

    fstream obj;
    obj.open("02_project.txt", ios :: in);

        // cout<<"\n\nEnter your's old password\t: ";
        // cin>>old;
        
    switch (option)
    {
        case '1':
                if (obj.is_open())
                {
                    i = 0;
                    while (!obj.eof())
                    {
                        while(getline(obj, str))
                        {
                            istringstream iss(str);
                            iss>>text;

                            word[i] = text;
                            i++;
                        }
                    }
                    obj.close();

                    fstream obj1;
                    obj1.open("02_project.txt", ios :: out);       

                    top2 : 

                    if (old == word[1])
                    {
                        if (obj1.is_open())
                        {

                            cout<<"\n\n\tEnter your new password  \t: ";
                            cin>>new_pass1;
                            cout<<"\tConfirm your password        \t: ";
                            cin>>new_pass2;

                            if (new_pass1 == new_pass2)
                            {
                                obj1<<word[0]<<"\n"<<new_pass1<<"\n"<<word[2];

                                cout<<"\n\nPassword changed succesfully !";
                            }
                            else
                            {
                                obj1<<word[0]<<"\n";
                                obj1<<old<<"\n";
                                obj1<<word[2];

                                cout<<"\n\nPassword not match !";
                                
                                count = 1;

                                obj1.close();
                            }

                            if (count == 1)
                            {
                                goto top2;
                                
                            }
                                  
                        }

                        obj1.close();           
                    }
                    else
                    {
                        cout<<"\n\nPlease enter valid password !"<<endl;
                        goto top1;
                    }

                    obj1.close();           
                }

                obj.close();
                break;

        default:
                cout<<"\n\n\tPlease Enter valid option !\n\n";
                // change_password();
                goto call;
                break;
    }

    obj.close();

    top3 :

    cout<<"\n\n\t\t   -----------------------------";
    cout<<"\n\t\t   Press 1 for back to home page\n";

    cout<<"\n\t\t   Enter            : ";
    cin>>option;

     switch (option)
     {
        case '1':
                main();
                break;
                
        default:
                cout<<"\n\nPlease enter valid option\n\n";
                goto top3;
                break;
     }

}


void account_details()
{
     int count = 0, i;
     char option;
     string str, id, pass, text, word[3];

     system("cls");

     call : 

     cout<<"\t\t\t\tA C C O U N T    D E T A I L S";
     cout<<"\n\t\t\t\t------------------------------";

     cout<<"\n\nEnter your's UserId and Password to know your account details\n";

     cout<<"\n\t\tEnter UserId  \t: ";
     cin>>id;

     cout<<"\t\tEnter Password\t: ";
     cin>>pass;

     cout<<"\n\nPress 1 to Search UserId";
        // cout<<"\n  \tPress 2 for Go back";

     cout<<"\n\nEnter your choice\t: ";
     cin>>option;

     fstream obj;
     obj.open("02_project.txt", ios :: in);


     switch (option)
     {
        case '1':
                if(obj.is_open())
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
                                        // cout<<"\nFatching data...";                                        
                    }
                                
                    if (id == word[0] && pass == word[1])
                    {
                        cout<<"\n\nA C C O U N T    D E T A I L S";

                        cout<<"\n\n\tUsername     \t: "<<word[0];
                        cout<<"\n\tPassword       \t: "<<word[1];
                        cout<<"\n\tPhone number   \t: "<<word[2];

                        count = 1;
                    }

                    obj.close();
                }

                if(count != 1)                        
                {
                    cout<<"\n\n\""<<id<<"\" account is not found !\n\n";
                    goto call;
                }
                break;

                default:
                    cout<<"\n\n\tPlease Enter valid option !\n\n";
                    goto call;
                    break;
     }

    obj.close();

    top:

    cout<<"\n\n\t\t   -----------------------------";
    cout<<"\n\t\t   Press 1 for back to home page\n";

    cout<<"\n\t\t   Enter            : ";
    cin>>option;

    switch (option)
    {
        case '1':
                main();
                break;
                
        default:
                cout<<"\n\nPlease enter valid option\n\n";
                goto top;
                break;
    }

}