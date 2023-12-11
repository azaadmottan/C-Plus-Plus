#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,comp,digit,result,n=0,mult=0,remainder,count=0;

    cout<<"Enter number: ";
    cin>>num;

    comp = num;
    digit = num;
    while(digit != 0)
    {
        digit = digit/10;
        count++;
    }
                                        // cout<<count;
    while(num != 0)
    {
        remainder = num % 10;
                                        // cout<<"remainder"<<remainder;
        result = pow(remainder,count);
        mult = result + mult;
                                        // cout<<mult;
        num = num / 10;
    }
                                        // cout<<mult;
    if(comp == mult)
    {
        cout<<comp<<" = "<<mult<<" is amstrong number";
    }
    else
    {
        cout<<comp<<" != "<<mult<<" is not amstrong number";
    }

    return 0;
}