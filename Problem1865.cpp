#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    char ara[1000];
    cin>> a;
    for(b=1; b<=a; b++)
    {
        cin>>ara;
        cin>>c;
        if(ara[0]=='T' && ara[1]=='h' && ara[2]=='o' && ara[3]=='r')
            cout<< "Y"<<endl;
        else  cout<< "N"<<endl;;
    }
    return 0;
}

