#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n1,n2,choise;
    char choise2;

    call:

    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;

    cout<<"\nEnter (1) for addition\nEnter (2) for subraction\nEnter (3) for multiplication\nEnter (4) for division\n\nEnter: ";
    cin>>choise;

    switch (choise)
    {
        case 1: cout<<"\nAddition of "<<n1<<" + "<<n2<<" is "<<n1+n2<<endl;
            break;

        case 2: cout<<"\nSubtraction of "<<n1<<" - "<<n2<<" is "<<n1-n2<<endl;
            break;

        case 3: cout<<"\nMultiplication of "<<n1<<" X "<<n2<<" is "<<n1*n2<<endl;
            break;

        case 4: cout<<"\nDivision of "<<n1<<" / "<<n2<<" is "<<(float)n1/n2<<endl;
            break;

        default: cout<<"\nWrong choise !\n";
        break;
    }

    cout<<"\nDo you want again calculate !\n(Enter y/n): ";
    cin>>choise2;

    if(choise2 == 'y')
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
