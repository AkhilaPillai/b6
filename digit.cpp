#include <iostream>
#include<ctype.h>
using namespace std;

int main()
{
   int n,i;
   cin>>n;
   if((n>0) || (n<0))
{
    for(i=1;i<=5;i++)
    cout<<n*i<<" ";
}
    return 0;
}
