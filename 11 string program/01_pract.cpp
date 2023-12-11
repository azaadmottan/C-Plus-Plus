#include<iostream>
using namespace std;

void character(char arr[]);                                         //functon prototype

int main()
{
    char third[] = {'a','z','a','a','d',' ','m','o','t','t','a','n','\0'};                  //string initialization
    
    for(int i=0; third[i] != '\0'; i++)
    {
       cout<<third[i];
    }
    cout<<endl;
    
    char first[] = "Azaad Mottan";                           //shortcut method to initialize string
    character(first);                                        //functon call
    
    char str[50];
    
    cout<<"\nEnter: ";
    cin.get(str,50);

    cout<<"String : "<<str;

    return 0;
}

void character(char arr[])
{
    for(int i = 0; arr[i] != '\0'; i++)
    { 
        cout<<arr[i];
    }
}