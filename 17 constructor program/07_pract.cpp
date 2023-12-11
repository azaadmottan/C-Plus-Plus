#include<iostream>
using namespace std;

int i=0;
class num
{
    public :
            num()                                             // constructure
            {
                i++;
                cout<<"Object number "<<i<<" is created"<<endl;
            }
            ~num()                                            // destructure  here " ~ " is tiled
            {
                cout<<"Object number "<<i<<" is destroyed"<<endl;
                i--;
            }
};

int main()
{
    num a,b,c;
    {
        num d;
    }

    return 0;
}