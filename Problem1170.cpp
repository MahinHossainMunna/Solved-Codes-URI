#include <iostream>
using namespace std;

int main() {

   int n;
   cin>>n;
   int i;
   for(i=1;i<=n;i++)
   {
        float x;
       cin>>x;
        int count=0;
       while(x>1.0)
       {
        x=x/2;
       count++;
       }
       cout << count<< " dias"<<endl;
   }
    return 0;
}

