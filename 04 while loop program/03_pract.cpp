#include<iostream>
using namespace std;

int main()
{
    int i=1;
    
    while(i <= 20)
    {
        if(i == 10)
        {
            break;
        }
    
        cout<<i<<endl;
        i++;
    }

    return 0;
}