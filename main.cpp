#include <iostream>
#include"poslfib.h"
using namespace std;

int main()
{
    PoslFib a;
   // a.show();
for(int i=0;i<30;i++)
    cout<<a.getnext()<<endl;
    return 0;
}
