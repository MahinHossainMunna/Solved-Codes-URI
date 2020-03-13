#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>> a;
    for(b=1; b<=a; b++)
    {
        cin>> c;
        if(c%2==0)
            cout<< "0"<< endl;
        else
           cout<< "1"<< endl;
    }
    return 0;
}

